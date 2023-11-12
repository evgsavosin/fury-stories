/*!
	@brief ���� ����� ��� ������� ������
	@author Found (evg.savosin)
	@date 26.04.2017
*/

CorpseCameraAreasPlayerEnter(playerid, areaid) 
{
	if (GetPVarInt(playerid, "Player:CorpseCamera") 
	|| GetPVarInt(playerid, "Player:Mask"))
	{
		return;
	}
	
	if (corpse_camera_zones[0] <= areaid <= corpse_camera_zones[1])
	{
		SetPVarInt(playerid, "Player:CorpseCamera", true);
	}
}

CorpseCameraAreasPlayerLeave(playerid, areaid) 
{
	if (!GetPVarInt(playerid, "Player:CorpseCamera") 
	|| GetPVarInt(playerid, "Player:Mask"))
	{
		return;
	}
	
	if (corpse_camera_zones[0] <= areaid <= corpse_camera_zones[1])
	{
		DeletePVar(playerid, "Player:CorpseCamera");
	}
}

CorpseCameraAreas()
{
	corpse_camera_zones[0] = CreateDynamicPolygon(Float: {
		114.0,-1488.0,183.0,-1401.0,148.0,-1361.0,147.0,-1252.0,299.0,
		-1098.0,493.0,-1084.0,651.0,-1005.0,758.0,-928.0,775.0,-886.0,774.0,
		-749.0,899.0,-632.0,1154.0,-611.0,1372.0,-592.0,1497.0,-601.0,1552.0,
		-699.0,1564.0,-812.0,1574.0,-868.0,1556.0,-907.0,1451.0,-939.0,1349.0,-922.0,
		1255.0,-922.0,921.0,-968.0,821.0,-1035.0,763.0,-1043.0,665.0,-1170.0,515.0,
		-1255.0,394.0,-1344.0,228.0,-1434.0,167.0,-1508.0,142.0,-1544.0, 106.0,-1524.0,114.0,-1488.0
	});
	
	CreateDynamicPolygon(Float: {
		348.0,-1394.0,294.0,-1485.0,251.0,-1589.0,328.0,-1633.0,475.0,-1663.0,542.0,
		-1686.0,642.0,-1683.0,641.0,-1403.0,705.0,-1442.0,794.0,-1426.0,924.0,-1380.0,
		1039.0,-1378.0,1043.0,-1292.0,947.0,-1290.0,943.0,-1148.0,795.0,-1147.0,727.0,
		-1196.0,647.0,-1262.0,616.0,-1220.0,348.0,-1394.0
	});
	
	CreateDynamicPolygon(Float: {
		1061.0,-1288.0,1061.0,-1396.0,1044.0,-1521.0,1037.0,-1576.0,902.0,-1576.0,854.0,
		-1571.0,772.0,-1583.0,780.0,-1636.0,811.0,-1645.0,808.0,-1764.0,608.0,-1722.0,
		475.0,-1723.0,463.0,-1814.0,615.0,-1857.0,794.0,-1863.0,1000.0,-1871.0,1078.0,
		-1851.0,1258.0,-1858.0,1288.0,-1819.0,1296.0,-1661.0,
		1287.0,-1559.0,1348.0,-1402.0,1339.0,-1281.0,1061.0,-1288.0
	});
	
	CreateDynamicPolygon(Float: {
		966.0,-982.0,967.0,-1031.0,1080.0,-1032.0,1086.0,-963.0,966.0,-982.0
	});
	
	CreateDynamicPolygon(Float: {
		1383.0,-960.0,1529.0,-983.0,1588.0,-1020.0,1720.0,-1032.0,1717.0,-1158.0,
		1851.0,-1194.0,1955.0,-1244.0,2026.0,-1270.0,2018.0,-1285.0,1968.0,-1285.0,
		1961.0,-1272.0,1860.0,-1272.0,1860.0,-1349.0,2002.0,-1350.0,2047.0,-1454.0,
		1857.0,-1454.0,1717.0,-1447.0,1549.0,-1448.0,1456.0,-1443.0,1458.0,-1301.0,
		1447.0,-1237.0,1445.0,-1167.0,1341.0,-1141.0,1383.0,-960.0
	});
	
	CreateDynamicPolygon(Float: {
		1373.0,-1585.0,1716.0,-1579.0,1835.0,-1619.0,1833.0,-1754.0,1834.0,-1829.0,
		1855.0,-1877.0,1820.0,-1872.0,1813.0,-1949.0,1703.0,-1944.0,1687.0,-1734.0,
		1574.0,-1738.0,1579.0,-1900.0,1435.0,-1926.0,1418.0,-1896.0,1384.0,-1857.0,
		1379.0,-1754.0,1339.0,-1754.0,1370.0,-1681.0,1373.0,-1585.0
	});
	
	CreateDynamicPolygon(Float: {
		1337.0,-2188.0,1349.0,-2496.0,1405.0,-2658.0,2113.0,-2652.0,2149.0,-2452.0,
		2165.0,-2368.0,2097.0,-2318.0,2077.0,-2190.0,1337.0,-2188.0
	});
	
	CreateDynamicPolygon(Float: {
		2807.0,-2336.0,2807.0,-2558.0,2697.0,-2558.0,2689.0,-2332.0,2807.0,-2336.0
	});
	
	CreateDynamicPolygon(Float: {
		2515.0,-2190.0,2489.0,-2234.0,2671.0,-2234.0,2673.0,-2198.0,2515.0,-2190.0
	});
	
	CreateDynamicPolygon(Float: {
		2811.0,-1878.0,2687.0,-1864.0,2655.0,-1678.0,2839.0,-1662.0,2811.0,-1878.0
	});
	
	CreateDynamicPolygon(Float: {
		2199.0,-1838.0,2087.0,-1840.0,2087.0,-1766.0,1965.0,-1768.0,1963.0,-1800.0,
		1895.0,-1800.0,1901.0,-1748.0,2185.0,-1748.0,2199.0,-1838.0
	});
	
	CreateDynamicPolygon(Float: {
		2065.0,-2122.0,1985.0,-2160.0,1913.0,-2160.0,1917.0,-2104.0,1969.0,-2062.0,1997.0,
		-2062.0,1997.0,-2108.0,2065.0,-2122.0
	});
	
	CreateDynamicPolygon(Float: {
		2339.0,-1966.0,2343.0,-2002.0,2441.0,-2012.0,2421.0,-1966.0,2429.0,-1942.0,2463.0,
		-1950.0,2479.0,-1964.0,2503.0,-1960.0,2503.0,-1920.0,2423.0,-1922.0,
		2393.0,-1888.0,2361.0,-1888.0,2365.0,-1932.0,2339.0,-1966.0
	});
	
	CreateDynamicPolygon(Float: {
		2381.0,-1260.0,2449.0,-1260.0,2443.0,-1216.0,2401.0,-1212.0,2381.0,-1260.0
	});
	
	CreateDynamicPolygon(Float: {
		2387.0,-1482.0,2535.0,-1472.0,2527.0,-1510.0,2493.0,-1526.0,2493.0,-1564.0,
		2443.0,-1562.0,2391.0,-1516.0,2387.0,-1482.0
	});
	
	CreateDynamicPolygon(Float: {
		2230.0,-1179.0,2232.0,-1147.0,2212.0,-1141.0,2208.0,-1151.0,2199.0,-1151.0,
		2200.0,-1182.0,2230.0,-1179.0
	});
	
	CreateDynamicPolygon(Float: {
		2166.0,-1133.0,2117.0,-1119.0,2116.0,-1146.0,2139.0,-1146.0,2143.0,-1210.0,
		2084.0,-1211.0,2083.0,-1225.0,2166.0,-1225.0,2166.0,-1133.0
	});
	
	CreateDynamicPolygon(Float: {
		2835.0,-1568.0,2837.0,-1523.0,2856.0,-1499.0,2822.0,-1482.0,2823.0,-1396.0,2870.0,
		-1395.0,2894.0,-1418.0,2884.0,-1514.0,2874.0,-1577.0,2835.0,-1568.0
	});
	
	CreateDynamicPolygon(Float: {
		2751.0,-1202.0,2754.0,-1232.0,2744.0,-1255.0,2729.0,-1227.0,2730.0,-1180.0,2765.0,
		-1173.0,2765.0,-1181.0,2751.0,-1185.0,2751.0,-1202.0
	});
	
	CreateDynamicPolygon(Float: {
		2745.0,-1059.0,2826.0,-1056.0,2828.0,-1128.0,2748.0,-1135.0,2733.0,-1109.0,2709.0,
		-1136.0,2711.0,-1099.0,2648.0,-1095.0,2646.0,-1133.0,2637.0,-1131.0,
		2634.0,-1089.0,2723.0,-1083.0,2745.0,-1059.0
	});
	
	CreateDynamicPolygon(Float: {
		2081.0,-1343.0,2123.0,-1345.0,2126.0,-1385.0,2074.0,-1390.0,2061.0,-1372.0,2057.0,
		-1345.0,2081.0,-1343.0
	});
	
	CreateDynamicPolygon(Float: {
		2708.0,-2013.0,2712.0,-2043.0,2735.0,-2047.0,2722.0,-2013.0,2708.0,-2013.0
	});
	
	CreateDynamicPolygon(Float: {
		2383.0,-2062.0,2388.0,-2148.0,2538.0,-2138.0,2545.0,-2058.0,2383.0,-2062.0
	});
	
	CreateDynamicPolygon(Float: {
		2193.0,-2184.0,2118.0,-2272.0,2136.0,-2295.0,2180.0,-2261.0,2205.0,-2275.0,
		2181.0,-2309.0,2196.0,-2328.0,2277.0,-2259.0,2193.0,-2184.0
	});
	
	CreateDynamicPolygon(Float: {
		1989.0,-1986.0,1990.0,-2000.0,1968.0,-2003.0,1965.0,-2042.0,1951.0,-2044.0,
		1953.0,-1974.0,1989.0,-1986.0
	});
	
	CreateDynamicPolygon(Float: {
		1743.0,-2041.0,1732.0,-2066.0,1809.0,-2077.0,1812.0,-2023.0,1808.0,-1955.0,
		1710.0,-1957.0,1700.0,-2001.0,1743.0,-2041.0
	});
	
	CreateDynamicPolygon(Float: {
		1922.0,-1854.0,1896.0,-1876.0,1954.0,-1881.0,1956.0,-1858.0,1922.0,-1854.0
	});
	
	corpse_camera_zones[1] = CreateDynamicPolygon(Float: {
		2041.0,-1898.0,2039.0,-1929.0,2078.0,-1929.0,2088.0,-1903.0,2041.0,-1898.0
	});
}