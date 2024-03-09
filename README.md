<h1>Exercícios de programação orientada a objetos (C++)</h1> <br> 1) Modifique	 a	 classe	 GradeBook como	 a	 seguir.	 Modifique	 também	 o	 programa	 para	 testar	 a	 nova	
classe. <br>
a. Inclua	um	segundo	atributo	string que	represente	o	nome	do	professor	da	disciplina; <br>
b. Crie	um	getter e	um	setter para	este	novo	atributo; <br>
c. Modifique	 o	construtor	 para	 receber	 dois	 parâmetros,	 um	 para	 o	 nome	 da	 disciplina	e	 outro	
para	o	nome	do	professor; <br>
d. Modifique	o	método	displayMessage para	apresentar	o	nome	do	professor	também. <br><br>
2. Crie	uma	classe	chamada Conta,	que	represente	contas	bancárias. A	classe	deve	conter	como	atributo	
o	saldo	da	conta	(um	número	real).	A	classe	deve	possuir	um	construtor	que	recebe	o	saldo	inicial	para	
inicializar	o	atributo,	validando	se	o	valor	é	maior	ou	igual	a	zero.	Caso	o	valor	seja	menor	a	zero,	o	
atributo	 deve	 ser	 inicializado	 com	 zero	 e	 uma	 mensagem	 de	 erro	 deve	 ser	 apresentada.	 Crie	 um	
programa	que	contenha	dois	objetos	desta	classe	e	utilize	cada	um	dos	três	métodos:<br>
a. Credito:	adiciona	um	valor	ao	saldo	atual;<br>
b. Debito:	subtrai	um	valor	do	saldo	atual,	garantindo	que	o	saldo	não	ficará	negativo.	Se	o	débito	
for	maior	que	o	saldo,	a	operação	não	deve	ser	realizada	e	uma	mensagem	apresentada;<br>
c. getSaldo:	retorna	o	saldo.<br><br>
3. Crie	uma	classe	chamada	NotaFiscal que	um	hardware utilize	para	representar	uma	nota	fiscal	em	uma	
loja	de	peças.	Uma	nota	fiscal	deve	incluir	quatro	dados	como	atributos:<br>
a. Número	da	peça	(string);<br>
b. Descrição	da	peça	(string);<br>
c. Quantidade	comprada	(inteiro);<br>
d. Preço	(número	real).<br>
A	classe	deve	incluir	ainda	getters e	setters para	cada	um	dos	atributos.	Ainda,	deve	haver	um	método	
getTotalNota que	calcule	e	 retorne	o	 total	 de	 um	vetor	 de	objetos.	Escreva	 um	 programa	 que	 teste	
cada	um	dos	métodos	da	classe.<br><br>
4. Crie	uma	classe	Empregado que	inclua	os	atributos	nome	(string),	sobrenome	(string)	e	salário	mensal	
(número	real).	A	classe	deve	incluir	construtores	para	cada	um	dos	atributos	para	evitar	lixo	e	também	
getters e	setters.	Crie	um	programa	que	teste	a	classe,	criando	dois	objetos, calculando	o	salário	anual	
de	cada,	dando	um	aumento	de	10%	e	calcule	o	salário	anual	novamente.<br><br>
5. Crie	uma	classe	Data que	inclua	três	atributos:	mês	(inteiro),	dia	(inteiro)	e	ano	(inteiro).	Crie	métodos	
para:<br>
a. Funcionar	como	getter e	setter,	validando	os dados	para	garantir	que	os	valores	são	reais;<br>
b. Funcionar	 como	 um	 construtor (com	 parâmetros	 padronizados) com	 três	 parâmetros	 para	
inicialização	dos	três	atributos; <br>
c. Imprimir a	data, com	os	campos	separados	por	/; <br>
d. Calcular	a	quantidade	de	dias	do	ano	até	aquele	mês,	recebendo	como	parâmetro	o	número	do	
mês; <br>
e. Sobrecarregue	 o	 método	 anterior	 para	 realizar	 o	 mesmo	 cálculo,	 porém,	 recebendo	 como	
parâmetro	o	nome	do	mês,	em	letras	minúsculas. <br>
Escreva	 um	 programa	 que	 teste	 todos	 os	 métodos	 da	 classe.	 Para	 simplificar	 o	 exercício,	 considere	
meses	ímpares	com	31	dias	e	meses	pares	com	30	dias.<br><br>
6. Crie	 uma	 classe	Aluno com	 atributos	 que	 armazenem	 o	 nome,	 a	 série	 que	 cursa	 e	 o	 grau.	 Crie	 um	
getter e	 um	setter,	 além	 de	 uma	 variável	static que	 conte	 a	 quantidade	 de	 objetos	 criados,	 a	 ser	
utilizada	 no	 construtor	e	 destrutor.	Crie	 um	vetor	 com	 15	 objetos	 desta	 classe	e	 preencha	 os	 dados	
através	do	setter.
