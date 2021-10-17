<?php
   session_start();
   
   include_once("../app/Database.php");
   $database = new Database();

   if(!isset($_SESSION["loggedin"]) || $_SESSION["loggedin"] !== true){
      header("location: index.php");
      exit;
   }
   
   $query = "SELECT * FROM players ORDER BY id";
   $result = $database->get($query);
?>

<!doctype html>
<html lang="en">
   <head>
      <!-- Required meta tags -->
      <meta charset="utf-8">
      <meta name="viewport" content="width=device-width, initial-scale=1">
      
      <!-- Bootstrap CSS -->
      <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-+0n0xVW2eSR5OomGNYDnhzAbDsOXxcvSN1TPprVMTNDbiYZCxYbOOl7+AMvyTG2x" crossorigin="anonymous">
      
      <title>Welcome Player!</title>
   </head>
   <body>
      <div>
         <nav class="navbar navbar-dark bg-dark">
            <div class="container">
               <a class="navbar-brand" href="#">
                  <img src="../images/valorant.png" class="BarTag" alt="" width="35" height="35">
               </a>
            </div>
         </nav>
         
         <div class="container">
            <table width='80%' border=0>
               <tr bgcolor='#CCCCCC'>
                  <td>Nickname</td>
                  <td>Email</td>
                  <td>Senha</td>
                  <td>Agente</td>
                  <td>Editar</td>
                  <td>Deletar</td>
               </tr>
            <?php 
               foreach ($result as $key => $res) {
                  echo "<tr>";
                  echo "<td>".$res['nickname']."</td>";
                  echo "<td>".$res['email']."</td>";
                  echo "<td>".$res['senha']."</td>";	
                  echo "<td>".$res['agente']."</td>";	
                  echo "<td><a href=\"updatePlayer.php?id=$res[id]\">Edit</a></td>";
                  echo "<td><a href=\"deletePlayer.php?id=$res[id]\" onClick=\"return confirm('Are you sure you want to delete?')\">Delete</a></td>";
               }
            ?>
            </table>
         </div>
      </div>
      
      <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/js/bootstrap.bundle.min.js" integrity="sha384-gtEjrD/SeCtmISkJkNUaaKMoLD0//ElJ19smozuHV6z3Iehds+3Ulb9Bn9Plx0x4" crossorigin="anonymous"></script>    
      <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.2/dist/umd/popper.min.js" integrity="sha384-IQsoLXl5PILFhosVNubq5LC7Qb9DXgDA9i+tQ8Zj3iwWAwPtgFTxbJ8NT4GN1R8p" crossorigin="anonymous"></script>
      <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/js/bootstrap.min.js" integrity="sha384-Atwg2Pkwv9vp0ygtn1JAojH0nYbwNJLPhwyoVbhoPwBhjQPR5VtM2+xf0Uwh9KtT" crossorigin="anonymous"></script>
   
   </body>
</html>