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
