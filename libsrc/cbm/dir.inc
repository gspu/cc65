;
; Internal include file, do not use directly.
; Written by Ullrich von Bassewitz. Based on C code by Groepaz.
;



;------------------------------------------------------------------------------
; Data structures

.struct DIR
    fd          .word
    offs        .word
    name        .byte   16+1
.endstruct


;------------------------------------------------------------------------------
; C callable functions

        .global _opendir
        .global _closedir
        .global _readdir
        .global _telldir
        .global _rewinddir
        .global __dirskip
