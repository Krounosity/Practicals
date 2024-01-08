var result = 0;
var afterOperation = 0;
var operation = "nothing";
$(".one").on("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 1;
    $(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 1;
    $(".result").innerHTML += afterOperation % 10;
  }
});
$(".two").on("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 2;
    $(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 2;
    $(".result").innerHTML += afterOperation % 10;
  }
});
$(".three").on("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 3;
    $(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 3;
    $(".result").innerHTML += afterOperation % 10;
  }
});
$(".four").on("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 4;
    $(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 4;
    $(".result").innerHTML += afterOperation % 10;
  }
});
$(".five").on("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 5;
    $(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 5;
    $(".result").innerHTML += afterOperation % 10;
  }
});
$(".six").on("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 6;
    $(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 6;
    $(".result").innerHTML += afterOperation % 10;
  }
});
$(".seven").on("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 7;
    $(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 7;
    $(".result").innerHTML += afterOperation % 10;
  }
});
$(".eight").on("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 8;
    $(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 8;
    $(".result").innerHTML += afterOperation % 10;
  }
});
$(".nine").on("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 9;
    $(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 9;
    $(".result").innerHTML += afterOperation % 10;
  }
});
$(".zero").on("click", function () {
  if (operation === "nothing") {
    result = result * 10 + 0;
    $(".result").innerHTML = result;
  } else {
    afterOperation = afterOperation * 10 + 0;
    $(".result").innerHTML += afterOperation % 10;
  }
});
$(".clear").on("click", function () {
  $(".result").innerHTML = "";
  result = 0;
  afterOperation = 0;
  operation = "nothing";
});
$(".sign").on("click", function () {
  result = -result;
  $(".result").innerHTML = result;
});
$(".plus").on("click", function () {
  $(".result").innerHTML = result + "+";

  operation = "plus";
});
$(".minus").on("click", function () {
  $(".result").innerHTML = result + "-";
  operation = "minus";
});
$(".mult").on("click", function () {
  $(".result").innerHTML = result + "*";
  operation = "mult";
});
$(".divide").on("click", function () {
  $(".result").innerHTML = result + "/";
  operation = "divide";
});
$(".equals").on("click", function () {
  if (operation === "plus") {
    result = calculation(result, afterOperation, plus);
    $(".result").innerHTML = result;
  } else if (operation === "minus") {
    result = calculation(result, afterOperation, minus);
    $(".result").innerHTML = result;
  } else if (operation === "mult") {
    result = calculation(result, afterOperation, mult);
    $(".result").innerHTML = result;
  } else if (operation === "divide") {
    result = calculation(result, afterOperation, divide);
    $(".result").innerHTML = result;
  }
  operation = "nothing";
});
$(".back").on("click", function () {
  if (operation === "nothing" && result !== 0) {
    result = Math.floor(result / 10);
    $(".result").innerHTML = result;
  } else if (operation !== "nothing" && afterOperation === 0) {
    operation = "nothing";
    $(".result").innerHTML = result;
  } else if (afterOperation !== 0) {
    afterOperation = Math.floor(afterOperation / 10);
    $(".result").innerHTML += afterOperation;
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
