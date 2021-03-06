/* admcli.c */
void AdmUsage(t_cli *cl);
void AdmInfo(t_cli *cl);
int AdmCmd(t_cli *cl, char *buf);
/* sensor.c */
t_cmn_sensor *CmnSensorFindByIeee(char *ieee);
t_cmn_sensor *networkDiaLookup(int dev, int serial);
t_cmn_sensor *CmnSensorNumSerial(int num, int serial);
void templateSetDPT(Dpt_t dpt);
void templateSetObject(void *xo);
void templateSetDevice(void *xo);
void SensorCreateNetworkCache(NetworkList_t *network, void *xo);
void SensorDisplayNetworksListOnCli(t_cli *cl);
void SensorStartupNetworks(void);
NetworkList_t *SensorFindNetworkFromName(char *name);
NetworkList_t *SensorCreateNetwork(char *name);
int SensorDeleteNetworkFromName(char *name);
void SensorDeleteNetwork(NetworkList_t *network);
void SensorFreeNetwork(NetworkList_t *network);
int SensorDiaDeleteNext(NetworkList_t *network);
int SensorDiaCreateNext(NetworkList_t *network);
void SensorInitializeNetwork(NetworkList_t *network, void *newXo);
void *SensorLoadNetworkFromXML(char *networkName);
void SensorInitNetworkList(void);
void SensorLoadNetworksFromFiles(void);
t_sensor *SensorCreateDevice(int type);
void SensorDeleteDevice(t_sensor *cp);
int SensorNetworksListEmpty(void);
/* sensor-diaserver.c */
int IpuExecuteMethod(char *ident, int targetlevel, void *obix, char *targetid, int tid);
int CmnNetworkExecuteMethod(char *ident, int targetlevel, void *obix, char *targetid, int tid);
int iCmnSensorExecuteMethod(t_cmn_sensor *cmn, int app, int cluster, int numm, int targetlevel, void *obix, char *targetid, int tid);
int iCmnSensorRetrieveAttrValue(t_cmn_sensor *cmn, int app, int cluster, int numm, int targetlevel, char *targetid, int tid);
int iCmnSensorUpdateAttrValue(t_cmn_sensor *cmn, int app, int cluster, int numm, int targetlevel, void *obix, char *targetid, int tid);
/* sensor-diaclient.c */
int WDiaUCBPreLoadTemplate_DiaDevInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaDevContCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaDevElemCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaAppInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaAppContCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaAppElemCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaDatElemCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaRepInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaDatContCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate(char *reqname, t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
void WDiaUCBPostLoadTemplate_DiaAppInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
int WDiaUCBPostLoadTemplate_DiaAppElemCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
void WDiaUCBPostLoadTemplate_DiaDevInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
void WDiaUCBPostLoadTemplate_DiaNetInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
void WDiaUCBPostLoadTemplate_DiaIpuInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
int WDiaUCBPostLoadTemplate(char *reqname, t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
void WDiaUCBRequestOk_DiaIpuOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaTopologyDatOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaNetOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaDevOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaAppOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaAccOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaDatOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaRepOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaNetDelOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaDevDelOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaAppDelOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaAccDelOk(t_dia_req *preq, t_cmn_sensor *cmn);
int WDiaUCBRequestOk(char *reqname, t_dia_req *preq, t_cmn_sensor *cmn);
int WDiaUCBRequestTimeout(char *reqname, t_dia_req *preq, t_cmn_sensor *cmn);
int WDiaUCBRequestError(char *reqname, t_dia_req *preq, t_cmn_sensor *cmn);
/* sensor-events.c */
/* var.c */
char *GetAdaptorVersion(void);
char *GetDate(void);
char *GetTime(void);
char *GetAdaptorName(void);
char *GetGwContact(void);
char *GetDrvContact(void);
char *GetHostName(void);
char *GetHostTarget(void);
char *GetReqId(void);
char *GetPlcTarget(void);
/* main.c */
char *GetEnvVarName(void);
int DoSerial(void);
void DoClockMs(void);
void DoClockSc(void);
void DoInternalEvent(t_imsg *imsg);
void DoInternalTimer(t_imsg *imsg);
void MainLoop(void);
void Usage(char *prg, char *fmt);
int DoArg(int initial, int argc, char *argv[]);
void SetOption(char *name, char *value);
void DoConfig(int hot, int custom, char *fcfg);
void stopService(int sig);
void catchChild(int sig);
int main(int argc, char *argv[]);
