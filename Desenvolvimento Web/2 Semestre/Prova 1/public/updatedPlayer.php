<?php
  include_once("../app/Database.php");
  $database = new Database();

  if(isset($_POST['Update'])){
    $id = $_POST['id'];
    $nickname = $_POST['nickname'];
    $email = $_POST['email'];
    $senha = $_POST['senha'];
    $agente = $_POST['agente'];

    $query = "UPDATE players SET nickname='$nickname', email='$email', senha='$senha', agente='$agente' WHERE id = '$id'";
    $database->execute($query);

    header("Location: home.php");
  }
?>