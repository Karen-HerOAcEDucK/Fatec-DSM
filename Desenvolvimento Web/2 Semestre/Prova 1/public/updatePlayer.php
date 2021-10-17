<?php
  include_once("../app/Database.php");
  $database = new Database();

  $id = $_GET['id'];
  $query = "SELECT * FROM players WHERE id = '$id'";
  $result = $database->get($query);

  foreach($result as $item){
    $nickname = $item['nickname'];
    $email = $item['email'];
    $senha = $item['senha'];
    $agente = $item['agente'];
  }
?>

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
      <h2>Editando Jogador</h2>
      <form action="updatedPlayer.php" method="post" name="form1">
        <div class="input-group flex-nowrap inputDiv">
          <input type="text" name="nickname" class="form-control inputCod" value="<?php echo $nickname ?>"/>
        </div>
        <div class="input-group flex-nowrap inputDiv">
          <input type="text" name="email" class="form-control inputCod" value="<?php echo $email?>"/>
        </div>
        <div class="input-group flex-nowrap inputDiv">
          <input type="text" name="senha" class="form-control inputCod" value="<?php echo $senha?>"/>
        </div>
        <div class="input-group flex-nowrap inputDiv">
          <input type="text" name="agente" class="form-control inputCod" value="<?php echo $agente?>"/>
        </div>
        <div class="buttonsDiv">
          <div class="buttonForms">
            <input type="hidden" name="id" value=<?php echo $_GET['id'];?>>
            <button type="submit" name="Update" class="btn buttonEnter">Editar</button>
          </div>
          <div class="buttonForms">
            <a href="./home.php">Voltar</a>
          </div>
        </div>
      </form>
    </div>
  </body>
</html>