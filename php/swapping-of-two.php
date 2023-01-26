<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>Swapping of two using PHP</title>
</head>
<body>
	<?php 

		//create two variables
		$a=100;
		$b=200;
		echo "Before Swapping <br>a is $a<br>b is $b";

		$c=$a;
		$a=$b;
		$b=$c;

		echo "<br> After swapping<br>a is $a<br>b is $b";

	 ?>
</body>
</html>