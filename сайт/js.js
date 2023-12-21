function calc() {
    let a = document.getElementById("num1").value;
    let b = document.getElementById("num2").value;

    if (isNaN(a) || isNaN(b)) {
        alert("Ошибка ввода! Введите число!");
        return;
    }

    a = parseFloat(a);
    b = parseFloat(b);

    let result = a + b;

    alert(result);
}