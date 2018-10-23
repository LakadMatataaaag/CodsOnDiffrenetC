function valid (form) {

  var fail = false;
  var name = form.name.value;
  var email = form.email.value;
  var password = form.password.value;
  var RePassword = form.RePassword.value;
  var state = form.state.value;

  var checkemail = /[0-9a-z_-]+@[0-9a-z_-]+\.[a-z]{2,5}/i;

  if (name == "" || name == " ") {

    fail = "Вы не ввели свое имя";
  }
  else if (checkemail.test(email) == false) {

    fail = "Email некорректен";
  }
  else if (password == "" || password == " ") {

    fail = "Вы не ввели пароль!";
  }
  else if (password != RePassword) {

    fail = "Пароли не совпадают";
  }
  else if (state == "") {
    fail = "Укажите пол!";
  }
  if (fail) {
    alert(fail);
  }
  else {
    window.location = "https://vk.com/lakadmatataaag";
  }


}
