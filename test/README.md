# Tutorial de como inicializar um mini projeto para realização de testes com Jest

É necessário ter o NodeJS instalado na máquina. Utilizando o VSCode como editor de código abra o terminal do VSCode e siga os passos a seguir: 

1 - Caso já possua o yarn instalado de forma global na máquina pode pular essa etapa, caso não tenha execute o comando 
```bash
npm i -g yarn
```

2 - Inicialize o projeto node com o comando
```bash
yarn init -y
```

3 - Instale o typescript no projeto, para que seja feita a utilização da linguagem typescript ao invés de javascript
```bash
yarn add typescript -D
```

4 - Inicialize o arquivo de configuração do typescript com o seguinte comando 
```bash
yarn tsc --init
```

Será gerado um arquivo chamado tsconfig.json na raíz do projeto, apague tudo que foi gerado dentro desse arquivo e insira as configurações conforme código abaixo:

```json
{
  "compilerOptions": {
    "target": "es5",
    "module": "commonjs",
    "lib": [
      "es6"
    ],
    "rootDir": "./",
    "strict": false,
    "strictPropertyInitialization": false,
    "experimentalDecorators": true,
    "emitDecoratorMetadata": true,
    "esModuleInterop": true,
    "skipLibCheck": true,
    "forceConsistentCasingInFileNames": true
  }
}
```

5 - Instale as dependencias do jest(biblioteca para realizar testes automatizados com javascript ou typescript) e do 
ts-node-dev(biblioteca que compila arquivos typescript e reinicia o projeto quando o arquivo é modificado) em modo de desenvolvimento 
```bash
yarn add jest @types/jest ts-jest ts-node-dev -D
```

6 - Em package.json que se encontra na raíz do projeto adicione um objeto json chamado scripts, no qual será inicializado a aplicação ou os testes. 
Abaixo segue como deverá ficar o arquivo package.json com todas as dependências instaladas em modo de desenvolvimento e o start dos scripts
```json
{
  "name": "test",
  "version": "1.0.0",
  "main": "index.js",
  "license": "MIT",
  "scripts": {
    "dev": "ts-node-dev src/main.ts",
    "test": "jest"
  },
  "devDependencies": {
    "@types/jest": "^27.0.1",
    "jest": "^27.2.0",
    "ts-jest": "^27.0.5",
    "ts-node-dev": "^1.1.8",
    "typescript": "^4.4.2"
  }
}
```

Observe neste respositório a estrutura do projeto, que pode ser organizada da forma que o desenvolvedor preferir.

7 - Por fim basta configurar o arquivo jest.config.ts conforme configuração abaixo, só assim os testes executarão seguindo a estrutura deste projeto

```ts
/*
 * For a detailed explanation regarding each configuration property and type check, visit:
 * https://jestjs.io/docs/configuration
 */

export default {
  bail: false,
  clearMocks: true,
  coverageProvider: 'v8',
  preset: 'ts-jest',
  testMatch: ['**/__tests__/*.spec.ts'],
};
```

Neste projeto de exemplo será apresentado um simples teste de unidade calculando o IMC, retornando o nome, e calculando a maioridade de uma entidade pessoa:

```ts
class Person {
  constructor(
    private name: string,
    private age: number,
    private height: number,
    private weight: number,
  ) {}

  getImc(): number {
    const result = (this.weight / Math.pow(this.height, 2)).toFixed(2);
    return +result;
  }

  getName(): string {
    return this.name;
  }

  isOfLegalAge(): boolean {
    return this.age >= 18;
  }
}

export { Person };
```

Veja abaixo, há uma função describe que limita um grupo de testes a serem efetuados,
e, cada teste desse grupo é realizado na função it cujo primeiro parâmetro cita o que o teste fará e o segundo
parâmetro a callback de execução do teste. Dentro da função it é necessário inserir outra função expect onde o 
parâmetro que ele recebe é a entrada e a próxima função toBe ou toEqual é o valor esperado daquele teste, valor de saída:

```ts
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
```

Executando o comando abaixo vemos o resultado de todos os testes:
```bash
yarn test
```

