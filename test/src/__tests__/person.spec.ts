import { Person } from '../models/Person';

describe('Tests', () => {
  const person = new Person('Ygor', 25, 1.8, 70);
  
  it('O IMC deve retornar 21.60', () => {
    expect(person.getImc()).toEqual(21.6);
  });

  it('O nome deve ser Rogério', () => {
    expect(person.getName()).toBe('Rogério'); 
  })

  it('Deve ser maior de idade', () => {
    expect(person.isOfLegalAge()).toEqual(true);
  })
});
