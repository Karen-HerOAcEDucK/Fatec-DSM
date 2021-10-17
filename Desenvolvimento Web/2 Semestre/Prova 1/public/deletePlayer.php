<?php
  include_once("../app/Database.php");
  $database = new Database();

  $id = $_GET['id'];

  $query = "DELETE FROM players WHERE id = '$id'";
  $database->delete($query);

  header("Location: home.php");
?>