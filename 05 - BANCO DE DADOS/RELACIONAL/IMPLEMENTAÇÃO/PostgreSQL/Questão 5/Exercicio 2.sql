insert into fornecedor values 
('F01', '3156145', 'razaosoci1', 'forncedor1', 'descricao fornecedor 1'),
('F02', '3554154', 'razaosoci2', 'forncedor2', 'descricao fornecedor 2'),
('F03', '11111', 'razaosoci3', 'forncedor3', 'descricao fornecedor 3'),
('F04', '31554564', 'razaosoci4', 'forncedor4', 'descricao fornecedor 4')

insert into parlamentar values
('P01', 'parlamentar1', 'uf1', 'novo', '2018-01-01', '2022-01-01', 40000),
('P02', 'parlamentar2', 'uf1', 'psl', '2018-02-01', '2022-02-01', 40000),
('P03', 'parlamentar3', 'uf2', 'pt', '2018-01-01', '2022-01-01', 60000),
('P04', 'parlamentar4', 'uf2', 'psdb', '2018-03-01', '2022-03-01', 50000)

insert into tipogasto values 
('T01', 'Auxilio Alimentação', 'Tipo Gasto 1'),
('T02', 'Auxilio Moradia', 'Tipo Gasto 2'),
('T03', 'Auxilio Gasolina', 'Tipo Gasto 3'),
('T04', 'Auxilio Terno', 'Tipo Gasto 4'),
('T05', 'Auxilio Viagem', 'Tipo Gasto 5')

insert into gastorealizado values 
('G06', 'P01', 'T01', 'F01', 2000, 'Credito', '2017-11-07', 9),
('G07', 'P01', 'T04', 'F01', 2000, 'Credito', '2017-11-07', 9),
('G08', 'P01', 'T05', 'F01', 2000, 'Credito', '2017-11-07', 9),
('G01', 'P01', 'T03', 'F01', 15000, 'Credito', '2017-10-02', 18),
('G02', 'P02', 'T01', 'F02', 10000, 'Credito', '2017-11-05', 8),
('G03', 'P01', 'T02', 'F01', 2000, 'Credito', '2017-11-07', 9),
('G04', 'P03', 'T02', 'F03', 12000, 'Credito', '2017-10-05', 10),
('G05', 'P02', 'T01', 'F01', 4500, 'Credito', '2017-11-08', 11)