// Elementary script generating just a random noise with given parameters

function GetInfo(info_type){
	switch(info_type){
		case "name":
			return "Basic";
		case "description":
			return "Elementary script generating just a random noise with given parameters.";
		case "args":
			GGen_AddIntArg("width","Width","Width of the map.", 1024, 128, 20000, 1);
			GGen_AddIntArg("height","Height","Width of the map.", 1024, 128, 20000, 1);
			GGen_AddEnumArg("smoothness","Smoothness","Affects amount of detail on the map.", 2, "Very Rough;Rough;Smooth;Very Smooth");
			GGen_AddEnumArg("feature_size","Feature Size","Affects size of individual hills/mountains.", 2, "Tiny;Medium;Large;Huge");
			GGen_AddIntArg("water_level","Water percentage","How much of the map should  be covered by sea.", 60, 5, 95, 5);
			
			return 0;
	}
}

function Generate(){
	local width = GGen_GetParam("width");
	local height = GGen_GetParam("height");
	local smoothness = 1 << GGen_GetParam("smoothness");
	local feature_size = GGen_GetParam("feature_size");
	local water_level = GGen_GetParam("water_level") / 100.;

	GGen_InitProgress(3);

	local base = GGen_Data_2D(width, height);
	
	base.Noise(smoothness, ((width > height) ? height : width) / (5 * (4 - feature_size)));
	
	base.Flood(1 - water_level);
	
	GGen_IncreaseProgress();
	
	base.Clamp(0, GGEN_MAX_HEIGHT);
	
	local profile = GGen_Data_1D(11, 0);
	profile.SetValue(6, 18);
	profile.SetValue(7, 43);
	profile.SetValue(8, 91);
	profile.SetValue(9, 163);
	profile.SetValue(10, 255);
	
	
	base.TransformValues(GGEN_STD_PROFILE, true)
			
	return base;
}