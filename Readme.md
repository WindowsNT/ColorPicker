# Direct2D Modern ColorPicker for Win32 with Alpha support

```C++

Features

	* One header file
	* Direct2D drawing
	* Alpha
	* HSL and RGB support
	* Can use the system dialog
	* Supports a picker



struct COLORPICKOPT
{
	bool Alpha = 1;
	int Mode = 1;
	float rsl = 0.1f;
	bool Dlg = 1;
	bool LUpdate = 0;
	bool AlsoUseSystem = 1;
	bool UsePicker = 1;
	float Resolution = 0.1f;
};

```


![RGB](https://github.com/WindowsNT/ColorPicker/raw/master/rgb.jpg?raw=true)
![HSL](https://github.com/WindowsNT/ColorPicker/raw/master/hsl.jpg?raw=true)



To use, simply:

```C++

	COLORPICK cp;
	D2D1_COLOR_F red = {1.0f,0,0,1.0f};
	HRESULT hr = cp.Show(hParent,red);
	if (hr == S_OK)
	{
		// Color is set
	}

```