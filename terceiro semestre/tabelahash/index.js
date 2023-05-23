const tamanho = 1000000
const tabela = new Array(tamanho);

class Usuario {
	constructor(nome, telefone) {
		this.nome = nome;
		this.telefone = telefone
	}
	adicionaDado(array = []) {
		const posicao = geraHash(this.nome)
		tabela[posicao] = this;
	};
	static buscaUser(nome) {
		const posicao = geraHash(nome)
		return tabela[posicao];
	}
}

function geraHash (nome) {
	let posicao = 0;
	for (let i = 0; i < nome.length; i++)
		posicao += nome.charCodeAt(i);
	return posicao % tamanho;
}
let user = []
user.push(new Usuario('bernardo', '(49) 9 8921-4727'));
user.push(new Usuario('gubiani', '(49) 9 8921-4727'));
user.push(new Usuario('mariana', '(49) 9 8921-4727'));
user.push(new Usuario('alguem', '(49) 9 8921-4727'));
user.push(new Usuario('socorro', '(49) 9 8921-4727'));
user.push(new Usuario('senhor', '(49) 9 8921-4727'));
user.push(new Usuario('moretto', '(49) 9 8921-4727'));
PESSOAS.forEach((a) => {
	let oi = new Usuario(a[0], a[1])
	oi.adicionaDado(tabela)
});

console.log(Usuario.buscaUser('senhor'))



