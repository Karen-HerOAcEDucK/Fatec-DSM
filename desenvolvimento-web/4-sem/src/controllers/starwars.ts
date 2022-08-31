import { Controller, Get } from '@overnightjs/core'
import { Request, Response } from 'express';

/*
    Controller que processa métodos
    da API https://swapi.dev//
    inicialmente vamos criar recursos Mocks
    usando alguns objetos hard-coded
*/

@Controller('planets')
export class StarwarsController {

    @Get('')
    public getStarwarsPlanets(request: Request, response: Response): void {
        response.send({})
    }
}