create table cliente(
	no_cliente int primary key,
	nome varchar(50) not null,
	CGCJ varchar(30) not null unique
)

create table projeto(
	id int primary key,
	nome varchar(50) not null,
	projCliente int not null,
	foreign key (projCliente) references cliente(no_cliente)
)

create table desenvolvedor(
	codigo int primary key,
	nome varchar(50) not null,
	custo float not null,
	check (custo > 0)
)

create table alocação_projDes(
	id int,
	codigo int,
	ate int not null,
	de int not null,
		primary key(id, codigo, de),
		foreign key (id) references projeto(id),
		foreign key (codigo) references desenvolvedor(codigo)
)

insert into cliente values
(1, 'Jose', '14365A'),
(2, 'Moises', '14565B')
insert into projeto values
(07, 'Segurança da Informação', 1),
(08, 'Segurança da Informação', 1)
insert into desenvolvedor values
(06, 'Matheus', 2000.50),
(07, 'Matheus', 1000)
insert into alocacao_projDes values
(07, 07, 05, 04),
(08, 07, 05, 07)