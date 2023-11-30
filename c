 <hr>
      <h2 style=”font-family:calibri:”><b>Conference paper: Carrington's Fury: </b></h2>
    <hr>
    <!style for tables>
    <style>
          table {
            font-family: Times New Roman, ariel;
            border-collapse: collapse;
            width: 30%
            }
          td, th {
            border: 1px solid #dddddd;
            text-align: left;
            padding: 8px;
            }
          tr:nth-child(even) {
            background-color: #dddddd
            }
        </style>
 
    
    <style>
p.ex1 {
  margin-left: 250px
}
    </style>
   
  </head>
<meta name="viewport" content="width=device-width, initial-scale=1"> 
<link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
<style>
  .myslides {display:none}
</style>

<body style="background-color:#FFFFFF;margin-left:50px;">
  
  <head>
   <p>  
    <p class="ex1"> 
    <table id="table"> 

        <tr>
          <th>Table of contents</th>
        </tr>
        <tr>
          <td><a href="#Abstract">Abstract</td>
        </tr>
        <tr>
          <td><a href="#Introduction">Introduction</td>
        </tr>
        <tr>
          <td><a href="#Analysis">Analysis and Discussion</td>
        </tr>
        <tr>
          <td><a href="#References">References</td>
        </tr>
      </table> 
  </p>
      
  </head>
  
<style>
  p {
  margin-left: 250px
  }
</style>
  <body>
   <p>
    <hr>  
    <h3 id="Abstract" style="font-family: Times New Roman"><b>Abstract</b></h3>
     
    <b5 style="fontsize: 12px;">Write Abstract here.</b5>

    <h3 id="Introduction" style="font-family: Times New Roman"><b>Introduction</b></h3>
    
     <b5 style="fontsize: 12px;">On the morning of September 1st, 1859, Astronomer Richard Carrington was observing the sun and noticed a cluster of enormous sunspots, after a while Carrington spotted a sudden explosion of light erupting out of the sunspots.The Earth is basically bombarded with EMPs. Luckily for us society's electrical framework was in its infancy at the time and thus we didn't really experience any significant damage. Still the event was powerful enough that it costs telegraph's to actually catch fire while aurora's could be seen across the globe. Imagine if an event like this struck the Earth today at a time when everything and everyone so heavily depend on electricity If the storm is strong enough it could cause an apocalyptic event taking years or even decades to recover from, What's even scarier is that in 2012 this almost happened. A CME equal to or possibly even stronger than the Carrington event went straight through Earth's orbit. Luckily Earth wasn't there this time.</b5>

     <h3 id="Analysis" style="font-family: Times New Roman"><b>Analysis and Discussion</b></h3>
    
     <b5 style="fontsize: 12px;"
      

    </b5>

    <!--   Solar Storm pic here    -->
     <img id="Figure a" src = "AG5K.gif" alt="Figure a" width="320" height="269" ><a href="">  Solar Storm of 1859</a>

     <b5 style="fontsize: 12px;">
     </b5>
    <br>
    </br>
    <!--   any other pics  -->
     <img id="Figure b" src = "Figure b.png" alt="Figure b" width="381" height="279" >Figure b <a href=""></a>

     <b5 style="fontsize: 12px;">
      
     </b5>


     <hr>
     <h3 id="References" style="font-family: Times New Roman"><b>References</b></h3>
     
     <b5 style="fontsize: 12px;">
       
               
     </b5>
    </p>
  </body>



  <head>
  <hr>
  <h2 style="font-family: Arial, sans-serif"><b>Conference Presentation: Carrington's Fury</b></h2>
</head>
 
<script>
  // Array of slide image URLs
  var slideImages = ["AG5K.gif", "spaceweather.gif", "Slide3.png", "Slide4.png", "Slide5.png"];
  var currentSlide = 0;
  function showSlide() {
    document.getElementById('slide').src = slideImages[currentSlide];
  }
  function nextSlide() {
    currentSlide = (currentSlide + 1) % slideImages.length;
    showSlide();
   }
  function prevSlide() {
    currentSlide = (currentSlide - 1 + slideImages.length) % slideImages.length;
    showSlide();
  }
  // Function to show a specific slide based on the button clicked
  function showSlideNumber(slideNumber) {
    currentSlide = slideNumber - 1;
    showSlide();
  }
  // Call showSlide() to display the first slide
  showSlide();
</script>

<div id="slide-container">
  <img id="slide" src="Slide1.png" alt"=Slide 1" style="width:100%; max-width:1600px;">

<! Previous and Next buttons container>
<div class="button-container">
  <button class="button" onclick="prevSlide()">Previous</button>
  <button class="button" onclick="nextSlide()">Next</button>
</div>

<! Slide number buttons container>  
<div class="slide-number-container">
  <button class="button" onclick="showSlideNumber(1)">1</button>
  <button class="button" onclick="showSlideNumber(2)">2</button>
  <button class="button" onclick="showSlideNumber(3)">3</button>
  <button class="button" onclick="showSlideNumber(4)">4</button>
  <button class="button" onclick="showSlideNumber(5)">5</button>
</div>

<style>
  /* Style to center the image */
  #slide-container {
    text-align: center;
    position: relative;
  }
 
  /* Style for the buttpns */
  .button-container {
    position: absolute;
    bottom: 0;
    left: 50%;
    transform: translateX(-50%);
    margin-bottom: -100px;  /* Add some margin between the image and buttons */
  }

  .button {
    padding 10px 20px;
    background-color: #4CAF50;
    color: white;
    border: none;
    border-radius: 5px;
    font-size: 16px;
    cursor: pointer;
    margin: 0 5px;  /* Add some margin between the buttons */
  }

  .slide-number-container {
    position: absolute;
    bottom: 0;
    left: 50%;
    transform: translateX(-50%);
    margin-bottom: -50px;  /* Add some margin between the slide number buttons and the image */
  }
 
</style>
  
</html>
