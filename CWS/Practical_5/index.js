function validation() {
  var first_name = document.reg_form.first_name.value;
  var last_name = document.reg_form.last_name.value;
  var perm_address = document.reg_form.perm_address.value;
  var state = document.reg_form.state.value;
  var dob = document.reg_form.dobirth.value;
  var gender = document.reg_form.Gender.value;
  var money = document.reg_form.income.value;
  if (first_name === "" || first_name === null) {
    alert("First name cannot be empty.");
    return false;
  } else if (last_name === "" || last_name === null) {
    alert("Last name cannot be empty.");
    return false;
  } else if (perm_address === "" || perm_address === null) {
    alert("Permanent address cannot be empty.");
    return false;
  } else if (state == "Select State") {
    alert("Please select a state.");
    return false;
  } else if (dob === "" || dob === null) {
    alert("Date of Birth cannot be empty.");
    return false;
  } else if (gender == "Select Gender") {
    alert("Please select a gender");
    return false;
  } else if (money === "" || money === null) {
    alert("Income cannot be empty for a bank account.");
    return false;
  }
}
