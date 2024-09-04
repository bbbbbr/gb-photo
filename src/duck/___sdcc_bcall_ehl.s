        .include        "global.s"

        .area _HOME

        rROMB0_LOCAL = 0x2000   ; $2000->$2fff
        
___sdcc_bcall_ehl::                     ; Performs a long call.
        ldh     a, (__current_bank)
        push    af                      ; Push the current bank onto the stack
        ld      a, e
        ldh     (__current_bank), a
        ld      (rROMB0_LOCAL), a             ; Perform the switch
        rst     0x20
        push    hl
        ldhl    sp, #3
        ld      h, (hl)
        ld      l, a
        ld      a, h
        ldh     (__current_bank), a
        ld      (rROMB0_LOCAL), a
        ld      a, l
        pop     hl
        add     sp, #2
        ret