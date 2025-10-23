        FORMAT ELF64

        PUBLIC abs2                 ;Declaração da funcao absoluto

        SECTION '.text'
abs2:
        MOV EAX,    EDI             ;Move o valor recebido como parametro para o registrador EAX
        CMP EAX,    0               ;Compara o valor com zero
        JL  .NEGATIVO               ;Salta para a label negativo se o número ativar a flag de sinal
        JNE .END                    ;Salta para o fim se positivo
.NEGATIVO:
        NEG EAX
.END:
        RET

