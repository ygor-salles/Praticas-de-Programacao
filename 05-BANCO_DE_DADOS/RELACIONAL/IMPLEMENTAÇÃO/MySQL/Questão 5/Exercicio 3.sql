A.
select p.codigo 
from parlamentar p
where (select count(codigo) from tipogasto) 
= 
(select count(distinct g.codTipo) from gastorealizado g, parlamentar p where g.codPar = p.codigo)

B.
select p.nome, g.codTipo
from parlamentar p left join gastorealizado g
on g.codPar = p.codigo
where g.dataa > '2017-11-01' and g.dataa < '2017-11-30'

C.
select codTipo, sum(valor)
from gastorealizado
where dataa > '2017-01-01' and dataa < '2017-10-30'
group by(codTipo)
having sum(valor) > 10000
/* OBS: Já tem o codTipo na tabela gastorealizado para projetar, então não precisa fazer junção com a tabela tipogasto */

D.
select p.nome
from parlamentar p join gastorealizado g 
on g.codPar = p.codigo
where g.valor > (select avg(g.valor) from gastorealizado g join fornecedor f on g.codFornec=f.codigo where f.cnpj='11111')

E.
select p.nome, tg.titulo, f.razzaosocial, gr.valor
from parlamentar p join gastorealizado gr on p.codigo = gr.codPar
join fornecedor f on f.codigo = gr.codFornec 
join tipogasto tg on tg.codigo = gr.codTipo

