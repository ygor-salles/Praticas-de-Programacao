A
insert into questionario values
(1,'tittle1','descricao1','24-09-2019','25-09-2019'),
(2,'tittle2','descricao2','20-09-2019','23-09-2019')

insert into questao values
(1,'enunciado1','objetiva'),
(2,'enunciado2','subjetiva'),
(3,'enunciado3','objetiva'),
(4,'enunciado4','objetiva'),
(5,'enunciado5','subjetiva'),
(6,'enunciado6','objetiva')

insert into questao_questionario values
(1, 1, 'obrigat�ria', 2.5),
(2, 1, 'n�o obrigat�ria', 3),
(3, 1, 'obrigat�ria', 4),
(4, 2, 'obrigat�ria', 4.5),
(5, 2, 'n�o obrigat�ria', 4),
(6, 2, 'obrigat�ria', 5)

insert into usuario values
(1,'A1009258','Apis@925'),
(2,'A1009257','Map*123'),
(3,'A1009256','Pacoca698'),
(4,'A1009255','Port%365'),
(5,'A1009254','Maca@123'),
(6,'A1009253','Sin@987'),
(7,'A1009252','Panela*42'),
(8,'A1009251','Feijao*'),
(9,'A1009250','TocToc423'),
(10,'A1009249','Parkur#')

insert into respondente values
(1, '147.145.369-88'),
(2, '148.145.369-00'),
(3, '150.145.369-81'),
(5, '170.145.369-36')

insert into agente values
(1, 'Especialista', 2),
(3, 'Operador', 1),
(5, 'Especialista', 2)

insert into e_mail values
(1, 'email1@hotmail.com'),
(2, 'email2@hotmail.com'),
(3, 'email3@hotmail.com'),
(4, 'email4@hotmail.com'),
(5, 'email5@hotmail.com'),
(6, 'email6@hotmail.com'),
(7, 'email7@hotmail.com'),
(8, 'email8@hotmail.com'),
(9, 'email9@hotmail.com'),
(10, 'email10@hotmail.com')

insert into resp_questao_questionario values
(1, 3, 1),
(1, 1, 2),
(5, 5, 2),
(1, 3, 2),
(2, 3, 1),
(3, 1, 2),
(1, 2, 2),
(5, 3, 1),
(1, 6, 1),
(3, 6, 2),
(1, 2, 1),
(3, 5, 2),
(1, 5, 1)

B
alter table respondente add nome varchar(50)

C
drop table e_mail

D
insert into usuario values (11,'A1009300','Nero@985')

E
update respondente 
set nome='Jubrisqueude Pinto' 
where codigo=1

F
delete from questao_questionario
where peso < 3.5
