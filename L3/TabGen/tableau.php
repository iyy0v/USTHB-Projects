<?php
$nbrLigne = $_POST['nbrLigne'];
$nbrCol = $_POST['nbrCol'];
$border = $_POST['bordure'];
$marge = $_POST['marge'];
$espacement = $_POST['espacement'];
$fond = $_POST['fond'];

$table = "<table border='".$border."' bordercolor='black' cellpadding='".$marge."' cellspacing='".$espacement."' bgcolor='".$fond."'>";
for($i=1;$i<=$nbrLigne;$i++) {
	$table = $table."<tr>";
	for($j=1;$j<=$nbrCol;$j++) {
		$table = $table."<td>".$i.":".$j."</td>";
	}
	$table = $table."</tr>";
}
$table = $table."</table>";
echo $table;
?>
