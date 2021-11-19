
CREATE TRIGGER TRG_func4 
AFTER UPDATE OR INSERT OR DELETE ON gastorealizado
FOR EACH ROW 
BEGIN
	UPDATE parlamentar SET valorcota = valorcota - NEW.valor WHERE codigo = NEW.codigo;
	UPDATE parlamentar SET valorcota = valorcota - OLD.valor WHERE codigo = OLD.codigo;
END; 
