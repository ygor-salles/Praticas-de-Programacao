A
select *
from candidato

B
select *
from questao
where gabarito like 'a'

C
select codigo, hora, dataa
from prova
where titulo like '%BNDS%'

D
select c.pnome, c.snome, q.descricao, q.gabarito, f.resposta, f.nota
from candidato c, questao q, faz f, prova p
where p.codigo = 101 and q.qtProva = p.codigo

E
select c.codigo, avg(f.nota)
from candidato c, faz f, questao q
where q.tipo='O' and f.codCandidato = c.codigo
group by (c.codigo)
having avg(f.nota) > 6

F
select p.titulo, q.descricao, q.gabarito
from prova p left join questao q on q.qtProva = p.codigo

G
select codigo
from candidato
where codigo in (select codCandidato from faz)
(select q.id from questao q, faz f where f.id=q.id)


H
select p.titulo
from prova p, candidato c, faz f, questao q
where c.cpf='1542359278'and q.qtProva = p.codigo
group by (p.titulo)

I
select pnome, snome
from candidato
where codigo not in (select codCandidato from faz)
(select q.id from questao q, faz f where f.id=q.id)
