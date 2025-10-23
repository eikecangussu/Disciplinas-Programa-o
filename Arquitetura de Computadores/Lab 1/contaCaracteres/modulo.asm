		FORMAT	ELF64
                                        ;declaracao das funcoes
		PUBLIC	soma
		PUBLIC	soma2
                PUBLIC  soma3
                PUBLIC  tamanho

		SECTION	'.text'
soma:	
                MOV	EAX, EDI        ;Recebe o valor do primeiro parametro e o guarda no registrador eax
		ADD	EAX, ESI        ;Soma o segundo parametro ao valor guardado no registrador e guarda o resultado no proprio registrador
		RET

soma2:	
                MOV	RAX, RDI        ;Recebe o valor do primeiro parametro e o guarda no registrador rdx
		ADD	RAX, RSI        ;Soma o segundo parametro ao valor guardado no registrador e guarda o resultado no proprio registrador
		RET
soma3:  
                MOV EAX, EDI            ;Recebe o valor do primeiro parametro e o guarda no registrador eax
                ADD EAX, ESI            ;Soma o segundo parametro ao valor guardado no registrador e guarda o resultado no proprio registrador
                ADD EAX, EDX            ;Soma o terceiro parametro ao valor guardado no registrador e guarda o resultado no proprio registrador
        RET
tamanho:    
                XOR RBX, RBX            ;Zera o registrador rax que será usado como contador
    .LOOP:
                MOV AL, [RDI]           ;Guarda o valor guardado no endereco de RDI na parte inferior do registrador AX
                CMP AL, 0               ;Compara o valor de AL com zero para verificar se ja se encerrou a string
                JE .END                 ;Se a condicao for verdadeira pula para o final da funcao
                INC RBX                 ;Usa RBX como o contador e incrementa seu valor se nao tiver chegado ao fim da string
                INC RDI                 ;Segue para o proximo byte
                JMP .LOOP               ;"pula" de volta para o inicio do loop
    .END:
                MOV RAX, RBX            ;Move o valor contado em RBX para o registrador de retorno RAX
                RET                     ;retorna o valor final do contador que esta guardado em rax
