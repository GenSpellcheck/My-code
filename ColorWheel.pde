float radius = 200;
float i = 0;
float h = 0;
float z = 0;

public void settings()
{
  size(600, 600);
}

public void setup()
{
  background(0);
  colorMode(HSB, 100);
}

public void draw()
{  
  if (radius-- <= 0)
  {
    radius = 200;
  }
  //for (float i = 0, h = 0; radius > 0; i += PI / 1000, h += .35 / TWO_PI - .006)
  //{
  //  //rotateY(.5);
  //  //rotateX(.5);
  //  stroke(h, 100, 100);
  //  point(radius * cos(i), radius * sin(i));
  //  //point(radius * cos(i), radius * sin(i), radius * (sin(i) + cos(i)));

  //  if (h >= 100)
  //  {
  //    h = 0;
  //  }
  //  radius -= TWO_PI / 10000;
  //}
  translate(width / 2, height / 2);
  for (float h = 0; radius > 0; radius -= .02, h += .01)
  {
    stroke(h, 100, 100);
    point(radius * cos(i), radius * sin(i));
    //point(radius * cos(i), radius * sin(i), radius * (sin(i) + cos(i)));

    if (h >= 100)
    {
      h = 0;
    }
  }
  i += PI / 1000;
  if( i % TWO_PI == 0)
  {
    noLoop();
  }
}
