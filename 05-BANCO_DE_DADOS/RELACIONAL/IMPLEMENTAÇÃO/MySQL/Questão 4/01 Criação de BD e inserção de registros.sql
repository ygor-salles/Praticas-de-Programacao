/*CRIA��O DE TABELAS BD*/

create table candidato (
	codigo int primary key,
	pnome varchar(20),
	snome varchar(20),
	cpf varchar(14),
	email varchar(50)
)

create table prova (
	codigo int primary key,
	titulo varchar(30),
	dataa date,
	hora float,
	tema varchar(50)
)

create table questao (
	id int primary key,
	tipo char(1),
		check(tipo='O' or tipo='D'),
	descricao varchar(150),
	gabarito varchar(3),
	qtProva int,
		foreign key (qtProva) references prova(codigo)
)

create table faz (
	codCandidato int,
	id int,
	resposta varchar(150),
	nota float,
		check (nota>0 and nota<10),
		primary key (codCandidato, id),
			foreign key (codCandidato) references candidato(codigo),
			foreign key (id) references questao(id)
)

/*INSER��O DE ELEMENTOS PARA TESTE:*/

insert into candidato values
(4, 'pnome3', 'snome3', '1542359278', 'rhtruruy44@hotmal.com'),
(1, 'pnome1', 'snome1', '125.142.256-77', 'kdgkfjkh@hotmal.com'),
(2, 'pnome2', 'snome2', '259.142.256-00', 'sdgdfh54@hotmal.com'),
(3, 'pnome3', 'snome3', '357.142.256-88', 'rhtruruy44@hotmal.com')

insert into prova values
(40, 'provaBNDS 40', '2018-02-01', 1.5, 'tema40'),
(101, 'prova30', '2018-02-02', 1.5, 'tema30'),
(10, 'prova10', '2018-04-04', 2, 'tema10'),
(20, 'prova20', '2018-03-03', 1, 'tema20'),
(30, 'prova30', '2018-02-02', 1.5, 'tema30')

insert into questao values
(101, 'O', 'descricao1', 'a', 20),
(102, 'O', 'descricao2', 'b', 20),
(103, 'D', 'descricao3', 'a', 30),
(104, 'O', 'descricao4', 'a', 101),
(105, 'D', 'descricao5', 'c', 101)

insert into faz values
(4, 102, 'resposta1', 5),
(4, 103, 'resposta1', 5),
(4, 104, 'resposta1', 5),
(4, 105, 'resposta1', 5),
(2, 103, 'resposta3', 9.5),
(1, 105, 'resposta2', 7.5),
(4, 101, 'resposta1', 5),
(1, 104, 'resposta2', 7),
(2, 105, 'resposta3', 8.5)
