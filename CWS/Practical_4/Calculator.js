var result = 0;
var afterOperation = 0;
var operation = "nothing";
document.querySelector(".one").addEventListener("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 1;
    document.querySelector(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 1;
    document.querySelector(".result").innerHTML = afterOperation;
  }
});
document.querySelector(".two").addEventListener("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 2;
    document.querySelector(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 2;
    document.querySelector(".result").innerHTML = afterOperation;
  }
});
document.querySelector(".three").addEventListener("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 3;
    document.querySelector(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 3;
    document.querySelector(".result").innerHTML = afterOperation;
  }
});
document.querySelector(".four").addEventListener("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 4;
    document.querySelector(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 4;
    document.querySelector(".result").innerHTML = afterOperation;
  }
});
document.querySelector(".five").addEventListener("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 5;
    document.querySelector(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 5;
    document.querySelector(".result").innerHTML = afterOperation;
  }
});
document.querySelector(".six").addEventListener("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 6;
    document.querySelector(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 6;
    document.querySelector(".result").innerHTML = afterOperation;
  }
});
document.querySelector(".seven").addEventListener("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 7;
    document.querySelector(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 7;
    document.querySelector(".result").innerHTML = afterOperation;
  }
});
document.querySelector(".eight").addEventListener("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 8;
    document.querySelector(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 8;
    document.querySelector(".result").innerHTML = afterOperation;
  }
});
document.querySelector(".nine").addEventListener("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 9;
    document.querySelector(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 9;
    document.querySelector(".result").innerHTML = afterOperation;
  }
});
document.querySelector(".zero").addEventListener("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 0;
    document.querySelector(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 0;
    document.querySelector(".result").innerHTML = afterOperation;
  }
});
document.querySelector(".clear").addEventListener("click", function () {
  document.querySelector(".result").innerHTML = "";
  result = 0;
  afterOperation = 0;
  operation = "nothing";
});
document.querySelector(".sign").addEventListener("click", function () {
  result = -result;
  document.querySelector(".result").innerHTML = result;
});
document.querySelector(".plus").addEventListener("click", function () {
  document.querySelector(".result").innerHTML = "+";
  operation = "plus";
});
document.querySelector(".minus").addEventListener("click", function () {
  document.querySelector(".result").innerHTML = "-";
  operation = "minus";
});
document.querySelector(".mult").addEventListener("click", function () {
  document.querySelector(".result").innerHTML = "*";
  operation = "mult";
});
document.querySelector(".divide").addEventListener("click", function () {
  document.querySelector(".result").innerHTML = "/";
  operation = "divide";
});
document.querySelector(".equal").addEventListener("click", function () {
  if (operation === "plus") {
    result = calculation(result, afterOperation, plus);
    document.querySelector(".result").innerHTML = result;
  } else if (operation === "minus") {
    result = calculation(result, afterOperation, minus);
    document.querySelector(".result").innerHTML = result;
  } else if (operation === "mult") {
    result = calculation(result, afterOperation, mult);
    document.querySelector(".result").innerHTML = result;
  } else if (operation === "divide") {
    result = calculation(result, afterOperation, divide);
    document.querySelector(".result").innerHTML = result;
  }
});
//Functions or operations
function calculation(n1, n2, operate) {
  return operate(n1, n2);
}
function plus(n1, n2) {
  return n1 + n2;
}
function minus(n1, n2) {
  return n1 - n2;
}
function mult(n1, n2) {
  return n1 * n2;
}
function divide(n1, n2) {
  return n1 / n2;
}
