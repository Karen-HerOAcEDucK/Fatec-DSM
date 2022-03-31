import pickle


if __name__ == "__main__":
    with open('registros.bin', 'rb') as list_in_file:
        registros = pickle.load(list_in_file)

# Desaio1: Capturar os nomes que começam com a letra M:

for registro in registros:
    if registro[0].startswith('M'):
        print(registro[0])