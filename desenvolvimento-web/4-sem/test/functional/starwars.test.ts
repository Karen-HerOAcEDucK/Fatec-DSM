// import { describe, it } from "node:test"

describe('Valida o comportamento de uma função', () => {

    function soma(a:number, b:number): number{
        return a + b
    }

    function sub(a:number, b:number): number{
        return a - b
    }

    function multi(a:number, b:number): number{
        return a * b
    }


    it('Soma de a + b', () => {
        const result: number = soma(10, 10)
        expect(result).toBe(20)
    })
    
    it('Soma de a - b', () => {
        const result: number = sub(10, 10)
        expect(result).toBe(0)
    })
    
    it('Multi de a * b', () => {
        const result: number = multi(10, 10)
        expect(result).toBe(100)
    })
})