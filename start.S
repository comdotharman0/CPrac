.file   "main.c"
        .text
        .globl  main                            // -->
        .p2align        2
        .type   main,@function
main:                                   // @main
        .cfi_startproc
// %bb.0:
        sub     sp, sp, #32
        .cfi_def_cfa_offset 32
        stp     x29, x30, [sp, #16]             // 16>
        add     x29, sp, #16
        .cfi_def_cfa w29, 16
        .cfi_offset w30, -8
        .cfi_offset w29, -16
        mov     w8, wzr
        str     w8, [sp, #8]                    // 4->
        stur    wzr, [x29, #-4]
        adrp    x0, .L.str
        add     x0, x0, :lo12:.L.str
        bl      printf
        ldr     w0, [sp, #8]                    // 4->
        .cfi_def_cfa wsp, 32
        ldp     x29, x30, [sp, #16]             // 16>

ldp     x29, x30, [sp, #16]             // 16>
        add     sp, sp, #32
        .cfi_def_cfa_offset 0
        .cfi_restore w30
        .cfi_restore w29
        ret
.Lfunc_end0:
        .size   main, .Lfunc_end0-main
        .cfi_endproc
                                        // -- End fun>
        .type   .L.str,@object                  // @.>
        .section        .rodata.str1.1,"aMS",@progbit>
.L.str:
        .asciz  "Hello"
        .size   .L.str, 6

        .ident  "clang version 21.1.8"
        .section        ".note.GNU-stack","",@progbits



