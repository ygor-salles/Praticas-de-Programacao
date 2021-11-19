

CREATE PROCEDURE atualizaCota(novovalorcota float) 
DECLARE p parlamentar; vlr FLOAT;
BEGIN
	FOR p AS SELECT * FROM parlamentar
		SELECT valorcota INTO vlr FROM parlamentar WHERE codigo = p.codigo;
		IF(vlr > 0) THEN
			UPDATE parlamentar SET valorcota = novovalorcota WHERE codigo = p.codigo;
		ELSEIF(vlr = 0) THEN
			UPDATE parlamentar SET valorcota = novovalorcota WHERE codigo = p.codigo;
		ELSEIF(vlr < 0) THEN
			UPDATE parlamentar SET valorcota = valorcota + novovalorcota WHERE codigo = p.codigo;
		END IF;
	END FOR;
END; 

SELECT atualizaCota (100);