<?php 
session_start();
$user_id = $_POST['userid'];
$user_pw = $_POST['userpw'];
$server="localhost";
$user="toast";
$pw="toor";
$db="spartan";

$conn = new mysqli($server, $user, $pw, $db);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 
echo "Connected successfully";

  $sql = "select * from users where id='$user_id'";
  $result = $conn->query($sql);
  if($result->num_rows > 0) {
    $row = $result->fetch_array();
    if($row['PW'] == $user_pw) {
      $_SESSION['ID'] = $user_id;
      if(isset($_SESSION['ID'])) {
        header('Location: ./success.html');
      }
      else echo "Login Failed";
    }
    else {
      echo "<script>alert('Check the ID and PW');</script>";
      echo "<script>window.location.href = './login.html';</script>";
    }
  }
?>
