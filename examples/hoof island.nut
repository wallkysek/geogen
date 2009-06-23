function GetInfo(info_type){
	switch(info_type){
		case "name":
			return "Hoof island";
		case "description":
			return "This script creates a hilly hoof shaped island.";
		case "args":
			GGen_AddIntArg("width","Width","Width of the map.", 1024, 128, 20000, 1);
			GGen_AddIntArg("height","Height","Width of the map.", 1024, 128, 20000, 1);
			
			return 0;
	}
}

function Generate(){
	local width = GGen_GetParam("width");
	local height = GGen_GetParam("height");

	local base = GGen_Data_2D(width, height);
	
	base.SetValueInRect(1 * width / 7, 1 * width / 7, 2 * width / 7, 6 * width / 7, 2000);
	base.SetValueInRect(5 * width / 7, 1 * width / 7, 6 * width / 7, 6 * width / 7, 2000);
	base.SetValueInRect(2 * width / 7, 1 * width / 7, 5 * width / 7, 2 * width / 7, 2000);
	
	base.Smooth(width / 7);
	
	local base2 = GGen_Data_2D(width, height);
	base2.SetValueInRect(1 * width / 7, 1 * width / 7, 2 * width / 7, 6 * width / 7, 1500);
	base2.SetValueInRect(5 * width / 7, 1 * width / 7, 6 * width / 7, 6 * width / 7, 1500);
	base2.SetValueInRect(2 * width / 7, 1 * width / 7, 5 * width / 7, 2 * width / 7, 1500);
	
	base2.Smooth(width / 10);
	base2.Add(-1000);
	base2.Clamp(0,2000);

	base.Add(base2);

	base.ScaleValuesTo(0,2000);

	local noise = GGen_Data_2D(width, height);
	noise.Noise(4, height > width ? width / 16 : height / 16);
	
	noise.ScaleValuesTo(-600, 600);
	
	base.Add(noise);
	
	base.Flood(0.6);
	base.Clamp(0, GGEN_MAX_HEIGHT);
	base.ScaleValuesTo(0,255);
		
	return base;
}