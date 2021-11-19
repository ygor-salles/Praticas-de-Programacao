
create table fornecedor (
	codigo varchar(7) primary key,
	cnpj varchar(15),
	razzaosocial varchar(50),
	nome varchar(50),
	descricao varchar(150)
)

create table parlamentar (
	codigo varchar(7) primary key,
	nome varchar(50),
	uf varchar(10),
	siglapartido varchar(10),
	iniciolegislatura date,
	fimlegstaura date,
	valorcota float
)

create table tipogasto (
	codigo varchar(7) primary key,
	titulo varchar(30),
	descricao varchar(150)
)

create table gastorealizado (
	codigo varchar(7) primary key,
	codPar varchar(7),
	codTipo varchar(7),
	codFornec varchar(7),
	valor float,
	formapagamento varchar(20),
	dataa date,
	hora float,
		foreign key (codPar) references parlamentar(codigo),
		foreign key (codTipo) references tipogasto(codigo),
		foreign key (codFornec) references fornecedor(codigo)
)

