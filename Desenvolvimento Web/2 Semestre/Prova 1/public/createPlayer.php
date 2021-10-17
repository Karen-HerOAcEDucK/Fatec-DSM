<!doctype html>
<html lang="en">
  <head>
      <!-- Required meta tags -->
      <meta charset="utf-8">
      <meta name="viewport" content="width=device-width, initial-scale=1">

      <!-- Bootstrap CSS -->
      <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-+0n0xVW2eSR5OomGNYDnhzAbDsOXxcvSN1TPprVMTNDbiYZCxYbOOl7+AMvyTG2x" crossorigin="anonymous">

      <link rel="stylesheet" href="../style/indexLogin.css">

      <title>Hello, world!</title>
  </head>
  <body>
    <br/><br/>
    
    <div class="generalForms">
      <form action="createPlayer.php" method="post" name="form1">
        <div class="input-group flex-nowrap inputDiv">
          <input type="text" name="nickname" class="form-control inputCod" placeholder="Nickname"/>
        </div>
        <div class="input-group flex-nowrap inputDiv">
          <input type="text" name="email" class="form-control inputCod" placeholder="Email"/>
        </div>
        <div class="input-group flex-nowrap inputDiv">
          <input type="password" name="senha" class="form-control inputCod" placeholder="Password"/>
        </div>
        <div class="input-group flex-nowrap inputDiv">
          <input type="text" name="agente" class="form-control inputCod" placeholder="Agente"/>
        </div>
        <div class="buttonsDiv">
          <div class="buttonForms">
            <button type="submit" name="Submit" class="btn buttonEnter">Criar</button>
          </div>
          <div class="buttonForms">
            <a href="./index.php">Voltar</a>
          </div>
        </div>
      </form>
    </div>
  </body>
</html>

<?php
  include_once("../app/Database.php");

  $database = new Database();

  if(isset($_POST["Submit"])){
    $nickname = $_POST["nickname"];
    $email = $_POST["email"];
    $senha = $_POST["senha"];
    $agente = $_POST["agente"];

    $query = "INSERT INTO players (nickname, senha, email, agente) VALUES ('$nickname', '$senha', '$email', '$agente')";
    $database->execute($query);
    header("Location: index.php");
  }
?>