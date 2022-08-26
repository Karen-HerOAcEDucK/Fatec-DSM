// import { describe, it } from "node:test"

describe('Valida o comportamento de uma função', () => {

    class Operation {
        soma(a:number, b:number): number{
            return a + b
        }
    
        sub(a:number, b:number): number{
            return a - b
        }
    
        multi(a:number, b:number): number{
            return a * b
        }
    }

    it('Soma de a + b', () => {
        const result: number = new Operation().soma(10, 10)
        expect(result).toBe(20)
    })
    
    it('Soma de a - b', () => {
        const result: number = new Operation().sub(10, 10)
        expect(result).toBe(0)
    })
    
    it('Multi de a * b', () => {
        const result: number = new Operation().multi(10, 10)
        expect(result).toBe(100)
    })
})