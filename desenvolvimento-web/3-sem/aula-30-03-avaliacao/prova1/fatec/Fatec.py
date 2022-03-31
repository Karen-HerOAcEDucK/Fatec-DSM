import email
from fatec.fatec.curso import Curso

class Fatec:
    def __init__(self, cidade):
        self._cidade = cidade
        self._cursos = []

    @property
    def cidade(self):
        return self._cidade

    @cidade.setter
    def cidade(self, valor):
        self._cidade = valor

    @property
    def cursos(self):
        return self._cursos

    def add_curso(self, nome, coordenador=None):
        if type(nome) == str:
            return self._cursos.append(Curso(nome.upper(), coordenador))
        else:
            raise TypeError('Nome do curso precisa ser string')

    def add_disciplina(self, nome_curso, disciplina, ementa):
        for curso in self._cursos:
            if curso.curso == nome_curso.upper():
                curso.add_disciplina(disciplina, ementa)

    def __str__(self):
        return 'Fatec ' + self.cidade

    def __repr__(self):
        return str(self)
