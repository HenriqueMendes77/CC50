window.onload = function () {
    const img = document.getElementById('img-leitura');
    const opcoes = [
        { id: 'opcao1', classe: 'borda-vermelha' },
        { id: 'opcao2', classe: 'borda-verde' },
        { id: 'opcao3', classe: 'borda-azul' },
        { id: 'opcao4', classe: 'borda-roxa' }
    ];

    opcoes.forEach(opcao => {
        const li = document.getElementById(opcao.id);
        li.addEventListener('mouseenter', () => {
            img.classList.remove('borda-vermelha', 'borda-verde', 'borda-azul', 'borda-roxa');
            img.classList.add(opcao.classe);
        });
        li.addEventListener('mouseleave', () => {
            img.classList.remove(opcao.classe);
        });
    });
};