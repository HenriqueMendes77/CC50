window.onload = function () {
    const msg1 = document.getElementById("msg-1");
    const msg2 = document.getElementById("msg-2");
    const resposta = document.getElementById("resposta");
    const botao = document.getElementById("botao");

    const options = {
        a: { correct: false },
        b: { correct: false },
        c: { correct: true },
        d: { correct: false },
        e: { correct: false }
    };

    function limparEstilos() {
        for (const id in options) {
            const btn = document.getElementById(id);
            btn.classList.remove("bg-red", "bg-green");
        }
    }

    function marcarResposta(btnId, correto) {
        limparEstilos();

        const btn = document.getElementById(btnId);
        msg1.innerText = correto ? "correto" : "errado";
        msg1.style.color = correto ? "green" : "red";
        btn.classList.add(correto ? "bg-green" : "bg-red");
    }

    for (const [id, { correct }] of Object.entries(options)) {
        const btn = document.getElementById(id);
        btn.onclick = () => marcarResposta(id, correct);
    }

    botao.onclick = function () {
        const estaCorreto = resposta.value.trim().toLowerCase() === "buzzer";
        msg2.innerText = estaCorreto ? "correto" : "errado";
        msg2.style.color = estaCorreto ? "green" : "red";
    };
};
