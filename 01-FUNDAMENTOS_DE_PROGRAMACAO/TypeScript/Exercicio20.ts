//20 - Dizer o dia da semana

const semana = ["Domingo", "Segunda-Feira", "Terça-Feira", "Quarta-Feira", "Quinta-Feira", "Sexta-Feira", "Sábado"]
const data = new Date()
console.log(semana[data.getDay()])