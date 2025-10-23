		FORMAT	ELF64		;Especifica o formato da saida para um aquivo para sistemas 64 bits

		PUBLIC	quad		;Declara a funcao quad
		EXTRN	somaC		;Declara uma funcao que sera recebida de um outro programa externo

		SECTION	'.text'		;Inicio da sessao .text
quad:		
		MOV	EDI, 10			;Carrega o valor 10 no registrador EDI
		MOV	ESI, 20			;Carrega o valor 20 no registrador ESI
		CALL	somaC		;Chama a fucao externa somaC

		MUL	EAX				;Multiplica o valor do operando pelo valor presente no registrador acumulador, que nesse caso é o proprio EAX
		RET					;Retorno

