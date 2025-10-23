                            FORMAT	ELF64
                            PUBLIC  pilha_registradores
                            EXTRN   imprimir_registradores
                            
                            SECTION	'.text'
                                                                        ;Empilha todos os registradores
pilha_registradores:        PUSH RAX
                            PUSH RBX    
                            PUSH RCX
                            PUSH RDX
                            PUSH RSI
                            PUSH RDI
                            PUSH RBP
                            MOV RAX, RSP                                ; Salva o que estava em RSP como valor nao endereco
                            PUSH RAX
                            PUSH R8
                            PUSH R9
                            PUSH R10
                            PUSH R11
                            PUSH R12
                            PUSH R13
                            PUSH R14
                            PUSH R15
                            MOV RDI, RSP                                ; Passa o valor de RSP para o paramentro da funcao
                            CALL imprimir_registradores

                            POP R15
                            POP R14
                            POP R13
                            POP R12
                            POP R11
                            POP R10
                            POP R9
                            POP R8
                            POP RAX                                     ; Descarta o que estava antes em RSP
                            POP RBP
                            POP RDI 
                            POP RSI
                            POP RDX
                            POP RCX
                            POP RBX
                            POP RAX
                            RET
