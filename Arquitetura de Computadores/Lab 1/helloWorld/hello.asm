	FORMAT	ELF64 EXECUTABLE		;Especifica o formato do arquivo que a ser gerado, um executavel, para um sistema de 64 bits

	SEGMENT	READABLE EXECUTABLE				;Indica a abertura de um novo segmento, onde as instrucoes terao permissoes de leitura e execucao
		MOV	RAX,	1						;Move o valor 1 para o registrador RAX
		MOV	RDI,	1						;Move o valor 1 para o registrador RDI
		MOV	RSI, 	MSG						;O endereco do ponteiro MSG é atribuido a RSI, MSG representa o endereco de inicio da string
		MOV	RDX, 	TAMANHO					;Move o conteudo de TAMANHO para RDX, TAMANHO carrega o valor do tamanho da string
	SYSCALL									;Realiza uma chamada do sistema

		MOV	RAX,	60							;Atribui 60 ao registrador RAX
		XOR	RDI, 	RDI						;Limpa o registrador RDI
	SYSCALL									;realiza uma chamada do sistema

	SEGMENT	WRITEABLE						;Abre um segmento com permissao de escrita
		MSG		DB	"Hello, world!", 10, 0	;Indica que no ponteiro indicado pelo rotulo MSG serao inseridos os bytes correpondentes a string da mensagem a frente
											;Apos a string o 10 indica quebra de linha e o 0 indica o fim da string
		TAMANHO		=	$ - MSG				;Atribui a TAMANHO o calculo do comprimeito total da string presente no endereco indicado por msg, calculo é realizado 
											;obtendo o resultado da subtracao do endereco atual que está logo ao fim da string representado por '$' menos o endereco
											;da inicial da string representado por MSG