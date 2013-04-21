//librerias
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
#define SIN_TIPO float

//declaracion de variables
int lee;//lee del teclado
int Esolar;//valores de energia solar
int Eeolica;//valores de energia eolica
int Egeotermica;//valores de energia geotermica

int ok;
int lp;//
int businf;//

//declaracion de metodos
void menuPrincipal();
void menuContinenteAmericano();
void menuSeleccionContinenteAmericano_localidad();
void menuSeleccionContinenteAmericano_energia();

//El programa esta iniciado para buscar datos de Energías //
//Renovables dentro del Continente Americano, pero está enfocado para poder expandirse//
//a todos los demás Continentes para poder obtener una información global de los recursos disponibles en el Planeta.//

int main(){
	menuPrincipal();
	cout<<"\n\n\n\t... Gracias por ocupar el buscador de energia Americano ... "<<endl;
	cout<<"\n\t... NASA Grupo Claw Engine - Unab 2013 ...\n "<<endl;
	system("PAUSE");
	return 0;
}



void menuPrincipal(){
	
	cout<<"\n\t\tBuscador de Energia Renovable"<<endl;
	cout<<"\n\t\t Version Beta 2.013\n";
	cout<<"\n<1>Continente Americano"<<endl;
	cout<<"\n<0>Para Salir"<<endl;
	cout<<"\nSeleccione el contiente: ";
	cin>>lee;
	
	if (lee == 1){
		menuContinenteAmericano();
	}
}

void menuContinenteAmericano(){
	cout<<"\n\t\t--- Continente Americano ---"<<endl;
	cout<<"\n<1> Buscar por Localidad \n<2> Por Cantidad de energia"<<endl;
	cout<<"\nSeleccione <1> o <2>\n: ";
	cin>> lee;
	if (lee == 1){
		menuSeleccionContinenteAmericano_localidad();
	}else if (lee == 2){
		menuSeleccionContinenteAmericano_energia();
	}
}

void menuSeleccionContinenteAmericano_localidad(){
	cout<<"\nSeleccionar: \n<1> America del Norte \n<2> America Central \n<3> America del Sur"<<endl;
	
				cin>>lp;
			if (lp==1) {//Inicio información America del Norte//
				cout<<"---America del Norte---"<<endl;
				cout<<""<<endl;
				cout<<"1 Canada"<<endl;
				cout<<"2 Estados Unidos"<<endl;
				cout<<"3 México"<<endl;
				cout<<""<<endl;
				cout<<"En que pais decea Buscar Informacion?"<<endl;
				cin>>businf;
				if (businf==1) {
					cout<<"---Canada---"<<endl;
					cout<<"---Norte de Canada---"<<endl;
					cout<<"Tipos de energia renovable"<<endl;
					cout<<"-Energia Solar: Aproximadamente 50 (E)"<<endl;
					cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
					cout<<""<<endl;
					cout<<"---Centro de Canada---"<<endl;
					cout<<"-Energia Solar: Aproximadamente 50 (E)"<<endl;
					cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
					cout<<""<<endl;
					cout<<"---Sur de Canada---"<<endl;
					cout<<"-Energia Solar:Aproximadamente 50 (E)"<<endl;
					cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
					cout<<""<<endl;
					cout<<"-Energia Eolica: Aproximadamente 6200 [MW]"<<endl;
				} else {
					if (businf==2) {
						cout<<"---Estados Unidos---"<<endl;
						cout<<""<<endl;
						cout<<"---Norte de Estados Unidos---"<<endl;
						cout<<"Tipos de energia renovable"<<endl;
						cout<<"-Energia Solar: Aproximadamente 160 (E)"<<endl;
						cout<<"-Energia Geotermica: Aproximadamente 5000(MW)"<<endl;
						cout<<""<<endl;
						cout<<"---Centro de Estados Unidos---"<<endl;
						cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
						cout<<"-Energia Geotermica: Aproximadamente 5000(MW)"<<endl;
						cout<<""<<endl;
						cout<<"---Sur de Estados Unidos---"<<endl;
						cout<<"-Energia Solar: Aproximadamente 275 (E)"<<endl;
						cout<<"-Energia Geotermica: Aproximadamente 5000(MW)"<<endl;
						cout<<""<<endl;
						cout<<"-Energia Eolica: Aproximadamente 60000 [MW]"<<endl;
					} else {
						if (businf==3) {
							cout<<"---Mexico---"<<endl;
							cout<<""<<endl;
							cout<<"---Norte de Mexico---"<<endl;
							cout<<"Tipos de energia renovable"<<endl;
							cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
							cout<<"-Energia Geotermica: Aproximadamente 2200(MW)"<<endl;
							cout<<""<<endl;
							cout<<"---Centro Mexico---"<<endl;
							cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
							cout<<"-Energia Geotermica: Aproximadamente 2200(MW)"<<endl;
							cout<<""<<endl;
							cout<<"---Sur de Mexico---"<<endl;
							cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
							cout<<"-Energia Geotermica: Aproximadamente 2200(MW)"<<endl;
							cout<<""<<endl;
							cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
						} else {
							cout<<"A Ingresado Un numero Erroneo"<<endl;
						}
					}
				}//Termino Información America del Norte//
			} else {
				if (lp==2) {//Inicio Información America Central//
					cout<<"---America Central---"<<endl;
					cout<<""<<endl;
					cout<<"1  Belice"<<endl;
					cout<<"2  Costa Rica"<<endl;
					cout<<"3  El Salvador"<<endl;
					cout<<"4  Guatemala"<<endl;
					cout<<"5  Honduras"<<endl;
					cout<<"6  Nicaragua"<<endl;
					cout<<"7  Panama"<<endl;
					cout<<"8  Antigua Y Barbuda"<<endl;
					cout<<"9  Bahamas"<<endl;
					cout<<"10 Barbados"<<endl;
					cout<<"11 Dominica"<<endl;
					cout<<"12 Grenada"<<endl;
					cout<<"13 San Kitts y Nevis"<<endl;
					cout<<"14 Santa Lucía"<<endl;
					cout<<"15 San Vicente y las Granadinas"<<endl;
					cout<<"16 Trinidad y Tobago"<<endl;
					cout<<"17 Cuba"<<endl;
					cout<<"18 Haiti"<<endl;
					cout<<"19 Jamaica"<<endl;
					cout<<"20 República Dominicana"<<endl;
					cout<<"21 Puerto Rico"<<endl;
					cout<<""<<endl;
					cout<<"En que pais decea Buscar Informacion?"<<endl;
					cin>>businf;
					if (businf==1) {
						cout<<"---Belice---"<<endl;
						cout<<""<<endl;
						cout<<"---Norte de Belice---"<<endl;
						cout<<"Tipos de energia renovable"<<endl;
						cout<<"-Energia Solar: Aproximadamente [Estructura Sin Datos]"<<endl;
						cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
						cout<<""<<endl;
						cout<<"---Centro Belice---"<<endl;
						cout<<"-Energia Solar: Aproximadamente [Estructura Sin Datos]"<<endl;
						cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
						cout<<""<<endl;
						cout<<"---Sur de Belice---"<<endl;
						cout<<"-Energia Solar: Aproximadamente [Estructura Sin Datos]"<<endl;
						cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
						cout<<""<<endl;
						cout<<"-Energia Eolica: Aproximadamente 1 [MW]"<<endl;
					} else {
						if (businf==2) {
							cout<<"---Costa Rica---"<<endl;
							cout<<""<<endl;
							cout<<"---Norte de Costa Rica---"<<endl;
							cout<<"Tipos de energia renovable"<<endl;
							cout<<"-Energia Solar: Aproximadamente 230 (E)"<<endl;
							cout<<"-Energia Geotermica: Aproximadamente 2900 (MW)"<<endl;
							cout<<""<<endl;
							cout<<"---Centro Costa Rica---"<<endl;
							cout<<"-Energia Solar: Aproximadamente 230 (E)"<<endl;
							cout<<"-Energia Geotermica: Aproximadamente 2900 (MW)"<<endl;
							cout<<""<<endl;
							cout<<"---Sur de Costa Rica---"<<endl;
							cout<<"-Energia Solar: Aproximadamente 230 (E)"<<endl;
							cout<<"-Energia Geotermica: Aproximadamente 2900 (MW)"<<endl;
							cout<<""<<endl;
							cout<<"-Energia Eolica: Aproximadamente 147 [MW]"<<endl;
						} else {
							if (businf==3) {
								cout<<"---El Salvador---"<<endl;
								cout<<""<<endl;
								cout<<"---Norte de El Salvador---"<<endl;
								cout<<"Tipos de energia renovable"<<endl;
								cout<<"-Energia Solar: Aproximadamente 245 (E)"<<endl;
								cout<<"-Energia Geotermica: Aproximadamente 2200 (MW)"<<endl;
								cout<<""<<endl;
								cout<<"---Centro El Salvador---"<<endl;
								cout<<"-Energia Solar: Aproximadamente 245 (E)"<<endl;
								cout<<"-Energia Geotermica: Aproximadamente 2200 (MW)"<<endl;
								cout<<""<<endl;
								cout<<"---Sur de El Salvador---"<<endl;
								cout<<"-Energia Solar: Aproximadamente 245 (E)"<<endl;
								cout<<"-Energia Geotermica: Aproximadamente 2200 (MW)"<<endl;
								cout<<""<<endl;
								cout<<"-Energia Eolica: Aproximadamente 5 [MW]"<<endl;
							} else {
								if (businf==4) {
									cout<<"---Guatemala---"<<endl;
									cout<<""<<endl;
									cout<<"---Norte de Guatemala---"<<endl;
									cout<<"Tipos de energia renovable"<<endl;
									cout<<"-Energia Solar: Aproximadamente 270 (E)"<<endl;
									cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
									cout<<""<<endl;
									cout<<"---Centro Guatemala---"<<endl;
									cout<<"-Energia Solar: Aproximadamente 270 (E)"<<endl;
									cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
									cout<<""<<endl;
									cout<<"---Sur de Guatemala---"<<endl;
									cout<<"-Energia Solar: Aproximadamente 270 (E)"<<endl;
									cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
									cout<<""<<endl;
									cout<<"-Energia Eolica: Aproximadamente 14 [MW]"<<endl;
								} else {
									if (businf==5) {
										cout<<"---Honduras---"<<endl;
										cout<<""<<endl;
										cout<<"---Norte de Honduras---"<<endl;
										cout<<"Tipos de energia renovable"<<endl;
										cout<<"-Energia Solar: Aproximadamente 220 (E)"<<endl;
										cout<<"-Energia Geotermica: Aproximadamente 990 (MW)"<<endl;
										cout<<""<<endl;
										cout<<"---Centro de Honduras---"<<endl;
										cout<<"-Energia Solar: Aproximadamente 220 (E)"<<endl;
										cout<<"-Energia Geotermica: Aproximadamente 990 (MW)"<<endl;
										cout<<""<<endl;
										cout<<"---Sur de Honduras---"<<endl;
										cout<<"-Energia Solar: Aproximadamente 220 (E)"<<endl;
										cout<<"-Energia Geotermica: Aproximadamente 990 (MW)"<<endl;
										cout<<""<<endl;
										cout<<"-Energia Eolica: Aproximadamente 70 [MW]"<<endl;
									} else {
										if (businf==6) {
											cout<<"---Nicaragua---"<<endl;
											cout<<""<<endl;
											cout<<"---Norte de Nicaragua---"<<endl;
											cout<<"Tipos de energia renovable"<<endl;
											cout<<"-Energia Solar: Aproximadamente 210 (E)"<<endl;
											cout<<"-Energia Geotermica: Aproximadamente 1519 (MW)"<<endl;
											cout<<""<<endl;
											cout<<"---Centro de Nicaragua---"<<endl;
											cout<<"-Energia Solar: Aproximadamente 210 (E)"<<endl;
											cout<<"-Energia Geotermica: Aproximadamente 1519 (MW)"<<endl;
											cout<<""<<endl;
											cout<<"---Sur de Nicaragua---"<<endl;
											cout<<"-Energia Solar: Aproximadamente 210 (E)"<<endl;
											cout<<"-Energia Geotermica: Aproximadamente 1519 (MW)"<<endl;
											cout<<""<<endl;
											cout<<"-Energia Eolica: Aproximadamente 102 [MW]"<<endl;
										} else {
											if (businf==7) {
												cout<<"---Panama---"<<endl;
												cout<<""<<endl;
												cout<<"---Norte de Panama---"<<endl;
												cout<<"Tipos de energia renovable"<<endl;
												cout<<"-Energia Solar: Aproximadamente 200 (E)"<<endl;
												cout<<"-Energia Geotermica: Aproximadamente 450 (MW)"<<endl;
												cout<<""<<endl;
												cout<<"---Centro de Panama---"<<endl;
												cout<<"-Energia Solar: Aproximadamente 200 (E)"<<endl;
												cout<<"-Energia Geotermica: Aproximadamente 450 (MW)"<<endl;
												cout<<""<<endl;
												cout<<"---Sur de Panama---"<<endl;
												cout<<"-Energia Solar: Aproximadamente 200 (E)"<<endl;
												cout<<"-Energia Geotermica: Aproximadamente 450 (MW)"<<endl;
												cout<<""<<endl;
												cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
											} else {
												if (businf==8) {
													cout<<"---Antigua Y Barbuda---"<<endl;
													cout<<""<<endl;
													cout<<"---Norte de Antigua Y Barbuda---"<<endl;
													cout<<"Tipos de energia renovable"<<endl;
													cout<<"-Energia Solar: Aproximadamente 215 (E)"<<endl;
													cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
													cout<<""<<endl;
													cout<<"---Centro de Antigua Y Barbuda---"<<endl;
													cout<<"-Energia Solar: Aproximadamente 215 (E)"<<endl;
													cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
													cout<<""<<endl;
													cout<<"---Sur de Antigua Y Barbuda---"<<endl;
													cout<<"-Energia Solar: Aproximadamente 215 (E)"<<endl;
													cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
													cout<<""<<endl;
													cout<<"-Energia Eolica: Aproximadamente 20 [MW]"<<endl;
												} else {
													if (businf==9) {
														cout<<"---Bahamas---"<<endl;
														cout<<""<<endl;
														cout<<"---Norte de Bahamas---"<<endl;
														cout<<"Tipos de energia renovable"<<endl;
														cout<<"-Energia Solar: Aproximadamente 272 (E)"<<endl;
														cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
														cout<<""<<endl;
														cout<<"---Centro de Bahamas---"<<endl;
														cout<<"-Energia Solar: Aproximadamente 272 (E)"<<endl;
														cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
														cout<<""<<endl;
														cout<<"---Sur de Bahamas---"<<endl;
														cout<<"-Energia Solar: Aproximadamente 272 (E)"<<endl;
														cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
														cout<<""<<endl;
														cout<<"-Energia Eolica: Aproximadamente 1 [MW]"<<endl;
													} else {
														if (businf==10) {
															cout<<"---Barbados---"<<endl;
															cout<<""<<endl;
															cout<<"---Norte de Barbados---"<<endl;
															cout<<"Tipos de energia renovable"<<endl;
															cout<<"-Energia Solar: Aproximadamente 260 (E)"<<endl;
															cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
															cout<<""<<endl;
															cout<<"---Centro de Barbados---"<<endl;
															cout<<"-Energia Solar: Aproximadamente 260 (E)"<<endl;
															cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
															cout<<""<<endl;
															cout<<"---Sur de Barbados---"<<endl;
															cout<<"-Energia Solar: Aproximadamente 260 (E)"<<endl;
															cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
															cout<<""<<endl;
															cout<<"-Energia Eolica: Aproximadamente 12 [MW]"<<endl;
														} else {
															if (businf==11) {
																cout<<"---Dominica---"<<endl;
																cout<<""<<endl;
																cout<<"---Norte de Dominica---"<<endl;
																cout<<"Tipos de energia renovable"<<endl;
																cout<<"-Energia Solar: Aproximadamente 261 (E)"<<endl;
																cout<<"-Energia Geotermica: Aproximadamente 120 (MW)"<<endl;
																cout<<""<<endl;
																cout<<"---Centro de Dominica---"<<endl;
																cout<<"-Energia Solar: Aproximadamente 261 (E)"<<endl;
																cout<<"-Energia Geotermica: Aproximadamente 120 (MW)"<<endl;
																cout<<""<<endl;
																cout<<"---Sur de Dominica---"<<endl;
																cout<<"-Energia Solar: Aproximadamente 261 (E)"<<endl;
																cout<<"-Energia Geotermica: Aproximadamente 120 (MW)"<<endl;
																cout<<""<<endl;
																cout<<"-Energia Eolica: Aproximadamente 6 [MW]"<<endl;
															} else {
																if (businf==12) {
																	cout<<"---Grenada---"<<endl;
																	cout<<""<<endl;
																	cout<<"---Norte de Grenada---"<<endl;
																	cout<<"Tipos de energia renovable"<<endl;
																	cout<<"-Energia Solar: Aproximadamente 259 (E)"<<endl;
																	cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																	cout<<""<<endl;
																	cout<<"---Centro de Grenada---"<<endl;
																	cout<<"-Energia Solar: Aproximadamente 259 (E)"<<endl;
																	cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																	cout<<""<<endl;
																	cout<<"---Sur de Grenada---"<<endl;
																	cout<<"-Energia Solar: Aproximadamente 259 (E)"<<endl;
																	cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																	cout<<""<<endl;
																	cout<<"-Energia Eolica: Aproximadamente 1 [MW]"<<endl;
																} else {
																	if (businf==13) {
																		cout<<"---San Kitts y Nevis---"<<endl;
																		cout<<""<<endl;
																		cout<<"---Norte de San Kitts y Nevis---"<<endl;
																		cout<<"Tipos de energia renovable"<<endl;
																		cout<<"-Energia Solar: Aproximadamente 237 (E)"<<endl;
																		cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																		cout<<""<<endl;
																		cout<<"---Centro de San Kitts y Nevis---"<<endl;
																		cout<<"-Energia Solar: Aproximadamente 237 (E)"<<endl;
																		cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																		cout<<""<<endl;
																		cout<<"---Sur de San Kitts y Nevis---"<<endl;
																		cout<<"-Energia Solar: Aproximadamente 237 (E)"<<endl;
																		cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																		cout<<""<<endl;
																		cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
																	} else {
																		if (businf==14) {
																			cout<<"---Santa Lucía---"<<endl;
																			cout<<""<<endl;
																			cout<<"---Norte de Santa Lucía---"<<endl;
																			cout<<"Tipos de energia renovable"<<endl;
																			cout<<"-Energia Solar: Aproximadamente 240(E)"<<endl;
																			cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																			cout<<""<<endl;
																			cout<<"---Centro de Santa Lucía---"<<endl;
																			cout<<"-Energia Solar:Aproximadamente 240(E)"<<endl;
																			cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																			cout<<""<<endl;
																			cout<<"---Sur de Santa Lucía---"<<endl;
																			cout<<"-Energia Solar: Aproximadamente 240(E)"<<endl;
																			cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																			cout<<""<<endl;
																			cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
																		} else {
																			if (businf==15) {
																				cout<<"---San Vicente y las Granadinas---"<<endl;
																				cout<<""<<endl;
																				cout<<"---Norte de San Vicente y las Granadinas---"<<endl;
																				cout<<"Tipos de energia renovable"<<endl;
																				cout<<"-Energia Solar:Aproximadamente 251 (E)"<<endl;
																				cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																				cout<<""<<endl;
																				cout<<"---Centro de San Vicente y las Granadinas---"<<endl;
																				cout<<"-Energia Solar: Aproximadamente 251 (E)"<<endl;
																				cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																				cout<<""<<endl;
																				cout<<"---Sur de San Vicente y las Granadinas---"<<endl;
																				cout<<"-Energia Solar: Aproximadamente 251 (E)"<<endl;
																				cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																				cout<<""<<endl;
																				cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
																			} else {
																				if (businf==16) {
																					cout<<"---Trinidad y Tobago---"<<endl;
																					cout<<""<<endl;
																					cout<<"---Norte de Trinidad y Tobago---"<<endl;
																					cout<<"Tipos de energia renovable"<<endl;
																					cout<<"-Energia Solar: Aproximadamente 263 (E)"<<endl;
																					cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																					cout<<""<<endl;
																					cout<<"---Centro de Trinidad y Tobago---"<<endl;
																					cout<<"-Energia Solar: Aproximadamente 263 (E)"<<endl;
																					cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																					cout<<""<<endl;
																					cout<<"---Sur de Trinidad y Tobago---"<<endl;
																					cout<<"-Energia Solar: Aproximadamente 263 (E)"<<endl;
																					cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																					cout<<""<<endl;
																					cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
																				} else {
																					if (businf==17) {
																						cout<<"---Cuba---"<<endl;
																						cout<<""<<endl;
																						cout<<"---Norte de Cuba---"<<endl;
																						cout<<"Tipos de energia renovable"<<endl;
																						cout<<"-Energia Solar: Aproximadamente 200 (E)"<<endl;
																						cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																						cout<<""<<endl;
																						cout<<"---Centro de Cuba---"<<endl;
																						cout<<"-Energia Solar: Aproximadamente 200 (E)"<<endl;
																						cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																						cout<<""<<endl;
																						cout<<"---Sur de Cuba---"<<endl;
																						cout<<"-Energia Solar: Aproximadamente 200 (E)"<<endl;
																						cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																						cout<<""<<endl;
																						cout<<"-Energia Eolica: Aproximadamente 12 [MW]"<<endl;
																					} else {
																						if (businf==18) {
																							cout<<"---Haiti---"<<endl;
																							cout<<""<<endl;
																							cout<<"---Norte de Haiti---"<<endl;
																							cout<<"Tipos de energia renovable"<<endl;
																							cout<<"-Energia Solar: Aproximadamente 200 (E)"<<endl;
																							cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																							cout<<""<<endl;
																							cout<<"---Centro de Haiti---"<<endl;
																							cout<<"-Energia Solar: Aproximadamente 200 (E)"<<endl;
																							cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																							cout<<""<<endl;
																							cout<<"---Sur de Haiti---"<<endl;
																							cout<<"-Energia Solar: Aproximadamente 200 (E)"<<endl;
																							cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																							cout<<""<<endl;
																							cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
																						} else {
																							if (businf==19) {
																								cout<<"---Jamaica---"<<endl;
																								cout<<""<<endl;
																								cout<<"---Norte de Jamaica---"<<endl;
																								cout<<"Tipos de energia renovable"<<endl;
																								cout<<"-Energia Solar: Aproximadamente 280 (E)"<<endl;
																								cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																								cout<<""<<endl;
																								cout<<"---Centro de Jamaica---"<<endl;
																								cout<<"Tipos de energia renovable"<<endl;
																								cout<<"-Energia Solar: Aproximadamente 280 (E)"<<endl;
																								cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																								cout<<""<<endl;
																								cout<<"---Sur de Jamaica---"<<endl;
																								cout<<"Tipos de energia renovable"<<endl;
																								cout<<"-Energia Solar: Aproximadamente 280 (E)"<<endl;
																								cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																								cout<<""<<endl;
																								cout<<"-Energia Eolica: Aproximadamente 48 [MW]"<<endl;
																							} else {
																								if (businf==20) {
																									cout<<"---República Dominicana---"<<endl;
																									cout<<""<<endl;
																									cout<<"---Norte de República Dominicana---"<<endl;
																									cout<<"Tipos de energia renovable"<<endl;
																									cout<<"-Energia Solar: Aproximadamente 289 (E)"<<endl;
																									cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																									cout<<""<<endl;
																									cout<<"---Centro de República Dominicana---"<<endl;
																									cout<<"-Energia Solar: Aproximadamente 289 (E)"<<endl;
																									cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																									cout<<""<<endl;
																									cout<<"---Sur de República Dominicana---"<<endl;
																									cout<<"-Energia Solar: Aproximadamente 289 (E)"<<endl;
																									cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																									cout<<""<<endl;
																									cout<<"-Energia Eolica: Aproximadamente 34 [MW]"<<endl;
																								} else {
																									if (businf==21) {
																										cout<<"---Puerto Rico---"<<endl;
																										cout<<""<<endl;
																										cout<<"---Norte de Puerto Rico---"<<endl;
																										cout<<"Tipos de energia renovable"<<endl;
																										cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
																										cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																										cout<<""<<endl;
																										cout<<"---Centro de Puerto Rico---"<<endl;
																										cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
																										cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																										cout<<""<<endl;
																										cout<<"---Sur de Puerto Rico---"<<endl;
																										cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
																										cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																										cout<<""<<endl;
																										cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
																									} else {
																										cout<<"A Ingresado Un numero Erroneo"<<endl;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}//Termino Información America Central//
				} else {
					if (lp==3) {//Inicio Información America del Sur//
						cout<<"---America del Sur---"<<endl;
						cout<<""<<endl;
						cout<<"1  Argentina"<<endl;
						cout<<"2  Bolivia"<<endl;
						cout<<"3  Brasil"<<endl;
						cout<<"4  Colombia"<<endl;
						cout<<"5  Chile"<<endl;
						cout<<"6  Ecuador"<<endl;
						cout<<"7  Guyana"<<endl;
						cout<<"8  Paraguay"<<endl;
						cout<<"9  Peru"<<endl;
						cout<<"10 Surinam"<<endl;
						cout<<"11 Uruguay"<<endl;
						cout<<"12 Venezuela"<<endl;
						cout<<""<<endl;
						cout<<"En que pais decea Buscar Informacion?"<<endl;
						cin>>businf;
						if (businf==1) {
							cout<<"---Argentina---"<<endl;
							cout<<""<<endl;
							cout<<"---Norte de Argentina---"<<endl;
							cout<<"Tipos de energia renovable"<<endl;
							cout<<"-Energia Solar: Aproximadamente 225 (E)"<<endl;
							cout<<"-Energia Geotermica: Aproximadamente 2010 (MW)"<<endl;
							cout<<""<<endl;
							cout<<"---Centro de Argentina---"<<endl;
							cout<<"-Energia Solar: Aproximadamente 225 (E)"<<endl;
							cout<<"-Energia Geotermica: Aproximadamente 2010 (MW)"<<endl;
							cout<<""<<endl;
							cout<<"---Sur de Argentina---"<<endl;
							cout<<"-Energia Solar: Aproximadamente 180 (E)"<<endl;
							cout<<"-Energia Geotermica: Aproximadamente 2010 (MW)"<<endl;
							cout<<""<<endl;
							cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
						} else {
							if (businf==2) {
								cout<<"---Bolivia---"<<endl;
								cout<<""<<endl;
								cout<<"---Norte de Bolivia---"<<endl;
								cout<<"Tipos de energia renovable"<<endl;
								cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
								cout<<"-Energia Geotermica: Aproximadamente 6500 (MW)"<<endl;
								cout<<""<<endl;
								cout<<"---Centro de Bolivia---"<<endl;
								cout<<"-Energia Solar: Aproximadamente 260 (E)"<<endl;
								cout<<"-Energia Geotermica: Aproximadamente 6500 (MW)"<<endl;
								cout<<""<<endl;
								cout<<"---Sur de Bolivia---"<<endl;
								cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
								cout<<"-Energia Geotermica: Aproximadamente 6500 (MW)"<<endl;
								cout<<""<<endl;
								cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
							} else {
								if (businf==3) {
									cout<<"---Brasil---"<<endl;
									cout<<""<<endl;
									cout<<"---Norte de Brasil---"<<endl;
									cout<<"Tipos de energia renovable"<<endl;
									cout<<"-Energia Solar: Aproximadamente 240 (E)"<<endl;
									cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
									cout<<""<<endl;
									cout<<"---Centro de Brasil---"<<endl;
									cout<<"-Energia Solar: Aproximadamente 240 (E)"<<endl;
									cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
									cout<<""<<endl;
									cout<<"---Sur de Brasil---"<<endl;
									cout<<"-Energia Solar: Aproximadamente 240 (E)"<<endl;
									cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
									cout<<""<<endl;
									cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
								} else {
									if (businf==4) {
										cout<<"---Colombia---"<<endl;
										cout<<""<<endl;
										cout<<"---Norte de Colombia---"<<endl;
										cout<<"-Energia Solar: Aproximadamente 175 (E)"<<endl;
										cout<<"-Energia Geotermica: Aproximadamente 50 (MW)"<<endl;
										cout<<""<<endl;
										cout<<"---Centro de Colombia---"<<endl;
										cout<<"-Energia Solar: Aproximadamente 175 (E)"<<endl;
										cout<<"-Energia Geotermica: Aproximadamente 50 (MW)"<<endl;
										cout<<""<<endl;
										cout<<"---Sur de Colombia---"<<endl;
										cout<<"-Energia Solar: Aproximadamente 175 (E)"<<endl;
										cout<<"-Energia Geotermica: Aproximadamente 50 (MW)"<<endl;
										cout<<""<<endl;
										cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
									} else {
										if (businf==5) {
											cout<<"---Chile---"<<endl;
											cout<<""<<endl;
											cout<<"---Norte de Chile---"<<endl;
											cout<<"Tipos de energia renovable"<<endl;
											cout<<"-Energia Solar: Aproximadamente 300 (E)"<<endl;
											cout<<"-Energia Geotermica: Aproximadamente 15600 (MW)"<<endl;
											cout<<""<<endl;
											cout<<"---Centro de Chile---"<<endl;
											cout<<"-Energia Solar: Aproximadamente 275 (E)"<<endl;
											cout<<"-Energia Geotermica: Aproximadamente 15600 (MW)"<<endl;
											cout<<""<<endl;
											cout<<"---Sur de Chile---"<<endl;
											cout<<"-Energia Solar: Aproximadamente 50 (E)"<<endl;
											cout<<"-Energia Geotermica: Aproximadamente 15600 (MW)"<<endl;
											cout<<""<<endl;
											cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
										} else {
											if (businf==6) {
												cout<<"---Ecuador---"<<endl;
												cout<<""<<endl;
												cout<<"---Norte de Ecuador---"<<endl;
												cout<<"Tipos de energia renovable"<<endl;
												cout<<"-Energia Solar: Aproximadamente 170 (E)"<<endl;
												cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
												cout<<""<<endl;
												cout<<"---Centro de Ecuador---"<<endl;
												cout<<"-Energia Solar: Aproximadamente 270 (E) "<<endl;
												cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
												cout<<""<<endl;
												cout<<"---Sur de Ecuador---"<<endl;
												cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
												cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
												cout<<""<<endl;
												cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
											} else {
												if (businf==7) {
													cout<<"---Guyana---"<<endl;
													cout<<""<<endl;
													cout<<"---Norte de Guyana---"<<endl;
													cout<<"Tipos de energia renovable"<<endl;
													cout<<"-Energia Solar: Aproximadamente 225(E)"<<endl;
													cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
													cout<<""<<endl;
													cout<<"---Centro de Guyana---"<<endl;
													cout<<"-Energia Solar: Aproximadamente 225(E)"<<endl;
													cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
													cout<<""<<endl;
													cout<<"---Sur de Guyana---"<<endl;
													cout<<"-Energia Solar: Aproximadamente 225(E)"<<endl;
													cout<<"-Energia Geotermica: Aprocimadamente [Estructura Sin Datos] :"<<endl;
													cout<<""<<endl;
													cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
												} else {
													if (businf==8) {
														cout<<"---Paraguay---"<<endl;
														cout<<""<<endl;
														cout<<"---Norte de Paraguay---"<<endl;
														cout<<"Tipos de energia renovable"<<endl;
														cout<<"-Energia Solar: Aproximadamente 225 (E)"<<endl;
														cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
														cout<<""<<endl;
														cout<<"---Centro de Paraguay---"<<endl;
														cout<<"-Energia Solar: Aproximadamente 225 (E)"<<endl;
														cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
														cout<<""<<endl;
														cout<<"---Sur de Paraguay---"<<endl;
														cout<<"-Energia Solar: Aproximadamente 225 (E)"<<endl;
														cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
														cout<<""<<endl;
														cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
													} else {
														if (businf==9) {
															cout<<"---Peru---"<<endl;
															cout<<""<<endl;
															cout<<"---Norte de Peru---"<<endl;
															cout<<"Tipos de energia renovable"<<endl;
															cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
															cout<<"-Energia Geotermica: Aproximadamente 3000 (MW)"<<endl;
															cout<<""<<endl;
															cout<<"---Centro de Peru---"<<endl;
															cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
															cout<<"-Energia Geotermica: Aproximadamente 3000 (MW)"<<endl;
															cout<<""<<endl;
															cout<<"---Sur de Peru---"<<endl;
															cout<<"-Energia Solar: Aproximadamente 250 (E)"<<endl;
															cout<<"-Energia Geotermica: Aproximadamente 3000 (MW)"<<endl;
															cout<<""<<endl;
															cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
														} else {
															if (businf==10) {
																cout<<"---Surinam---"<<endl;
																cout<<""<<endl;
																cout<<"---Norte de Surinam---"<<endl;
																cout<<"Tipos de energia renovable"<<endl;
																cout<<"-Energia Solar: Aproximadamente 225(E)"<<endl;
																cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																cout<<""<<endl;
																cout<<"---Centro de Surinam---"<<endl;
																cout<<"-Energia Solar: Aproximadamente 225(E)"<<endl;
																cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																cout<<""<<endl;
																cout<<"---Sur de Surinam---"<<endl;
																cout<<"-Energia Solar: Aproximadamente 225(E)"<<endl;
																cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																cout<<""<<endl;
																cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
															} else {
																if (businf==11) {
																	cout<<"---Uruguay---"<<endl;
																	cout<<""<<endl;
																	cout<<"---Norte de Uruguay---"<<endl;
																	cout<<"Tipos de energia renovable"<<endl;
																	cout<<"-Energia Solar: Aproximadamente 150 (E)"<<endl;
																	cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																	cout<<""<<endl;
																	cout<<"---Centro de Uruguay---"<<endl;
																	cout<<"-Energia Solar: Aproximadamente 150 (E)"<<endl;
																	cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																	cout<<""<<endl;
																	cout<<"---Sur de Uruguay---"<<endl;
																	cout<<"-Energia Solar: Aproximadamente 150 (E)"<<endl;
																	cout<<"-Energia Geotermica: Aproximadamente [Estructura Sin Datos]"<<endl;
																	cout<<""<<endl;
																	cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
																} else {
																	if (businf==12) {
																		cout<<"---Venezuela---"<<endl;
																		cout<<""<<endl;
																		cout<<"---Norte de Venezuela---"<<endl;
																		cout<<"-Energia Solar: Aproximadamente 230 (E)"<<endl;
																		cout<<"-Energia Geotermica: Aproximadamente 150 (MW)"<<endl;
																		cout<<""<<endl;
																		cout<<"---Centro de Venezuela---"<<endl;
																		cout<<"-Energia Solar: Aproximadamente 230 (E)"<<endl;
																		cout<<"-Energia Geotermica: Aproximadamente 150 (MW)"<<endl;
																		cout<<""<<endl;
																		cout<<"---Sur de Venezuela---"<<endl;
																		cout<<"-Energia Solar: Aproximadamente 230 (E)"<<endl;
																		cout<<"-Energia Geotermica: Aproximadamente 150 (MW)"<<endl;
																		cout<<""<<endl;
																		cout<<"-Energia Eolica: Aproximadamente [NO EXISTE INFORMACION]"<<endl;
																	} else {
																		cout<<"A Ingresado Un numero Erroneo"<<endl;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}//Termino Informacion America del Sur//
	
	menuPrincipal();//lo utilizo cuando llego al final de un proceso.
}

void menuSeleccionContinenteAmericano_energia(){
	cout<<"\n\t\t--- Continente Americano ---"<<endl;
	cout<<"\nSeleccion: Buscar por valores energeticos?"<<endl;
	cout<<"\nIngresar valor de energia SOLAR [IRRADIANCIA(W/M2]: ";
	cin>>Esolar;
	cout<<"\nIngresar valor de energia EOLICA (MW): ";
	cin>>Eeolica;
cout<<"\nIngresar valor de energia GEOTERMICA (UNIDADDEMEDIDA): ";
	cin>>Egeotermica;
	
	if (Esolar<=75 && Esolar<=125) {
		cout<<"Energia solar bajo:[en IRRADIANCIA(W/M2]"<<endl;
		cout<<"Canada, zona norte:"<<50<<endl;
		cout<<"Canada, zona centro:"<<50<<endl;
		cout<<"Canada, zona sur:"<<50<<endl;
		cout<<"Chile, zona sur:"<<50<<endl;
	}
	if (Esolar>125 && Esolar<=175) {
		cout<<"Energia solar medio bajo:[en IRRADIANCIA(W/M2]"<<endl;
		cout<<"USA, zona norte:"<<160<<endl;
		cout<<"Colombia, general:"<<175<<endl;
		cout<<"Ecuador, zona norte:"<<170<<endl;
		cout<<"Uruguay, general:"<<150<<endl;
	}
	if (Esolar>175 && Esolar<=225) {
		cout<<"Energia solar medio:[en IRRADIANCIA(W/M2]"<<endl;
		cout<<"Honduras, general:"<<220<<endl;
		cout<<"Nicaragua, general:"<<210<<endl;
		cout<<"Panama, general:"<<200<<endl;
		cout<<"Antigua y barbuda, general:"<<213<<endl;
		cout<<"Cuba, general:"<<200<<endl;
		cout<<"Haiti, general:"<<200<<endl;
		cout<<"Argentina, zona norte:"<<225<<endl;
		cout<<"Argetina, zona centro:"<<225<<endl;
		cout<<"Argentina, zona sur:"<<180<<endl;
		cout<<"Guayana, general:"<<225<<endl;
		cout<<"Paraguay, general:"<<225<<endl;
		cout<<"Surinam, general:"<<225<<endl;
	}
	if (Esolar>225 && Esolar<=275) {
		cout<<"Energia solar medio alto:[en IRRADIANCIA(W/M2]"<<endl;
		cout<<"USA, zona centro:"<<250<<endl;
		cout<<"USA, zona sur:"<<275<<endl;
		cout<<"Mexico, general:"<<250<<endl;
		cout<<"Belice, general:"<<250<<endl;
		cout<<"Costa Rica, general:"<<230<<endl;
		cout<<"Salvador, general:"<<245<<endl;
		cout<<"Guatemala, general:"<<270<<endl;
		cout<<"Bahamas, general:"<<272<<endl;
		cout<<"Barbados, general:"<<260<<endl;
		cout<<"Grenada, general:"<<259<<endl;
		cout<<"Santa Kitts y Nevis, general:"<<237<<endl;
		cout<<"Santa Lucia, general:"<<240<<endl;
		cout<<"San Vicente y granadinas, general:"<<251<<endl;
		cout<<"Trinidad y Tobago, general:"<<263<<endl;
		cout<<"Puerto rico, general:"<<250<<endl;
		cout<<"Bolivia, zona norte:"<<250<<endl;
		cout<<"Bolivia, zona centro:"<<260<<endl;
		cout<<"Bolivia, zona sur:"<<250<<endl;
		cout<<"Brasil, general:"<<240<<endl;
		cout<<"Chile, zona centro:"<<275<<endl;
		cout<<"Ecuador, zona centro:"<<270<<endl;
		cout<<"Ecuador, zona sur:"<<250<<endl;
		cout<<"Peru, general:"<<250<<endl;
		cout<<"Venezuela, general:"<<230<<endl;
	}
	if (Esolar>275) {
		cout<<"Energia solar alto:[en IRRADIANCIA(W/M2]"<<endl;
		cout<<"Jamaica, general:"<<280<<endl;
		cout<<"Republica Dominicana, general:"<<289<<endl;
		cout<<"Chile, zona norte:"<<300<<endl;
	}
	if (Eeolica<=30) {
		cout<<"Energia eolica : [MW]"<<endl;
		cout<<"Grenada:"<<1<<endl;
		cout<<"Cuba:"<<12<<endl;
		cout<<"Belice:"<<1<<endl;
		cout<<"El Salvador:"<<5<<endl;
		cout<<"Guatemala:"<<14<<endl;
		cout<<"Antigua y barbuda:"<<20<<endl;
		cout<<"Bahamas:"<<1<<endl;
		cout<<"Barbados:"<<12<<endl;
		cout<<"Dominico:"<<6<<endl;
	}
	if (Eeolica>30 && Eeolica<=60) {
		cout<<"Energia eolica : [MW]"<<endl;
		cout<<"Jamaica:"<<48<<endl;
		cout<<"Republica Dominicana:"<<34<<endl;
	}
	if (Eeolica>60 && Eeolica<=90) {
		cout<<"Energia eolica : [MW]"<<endl;
		cout<<"Honduras"<<70<<endl;
	}
	if (Eeolica>90 && Eeolica<=120) {
		cout<<"Energia eolica : [MW]"<<endl;
		cout<<"Nicaragua:"<<102<<endl;
	}
	if (Eeolica>120 && Eeolica<=150) {
		cout<<"Energia eolica : [MW]"<<endl;
		cout<<"Costa rica:"<<147<<endl;
	}
	if (Eeolica>150) {
		cout<<"Energia eolica : [MW]"<<endl;
		cout<<"Estados Unidos:"<<60000<<endl;
		cout<<"Canada:"<<6200<<endl;
	}
	
	
	cout<<"\nDesea otra consulta? <1> Si <2> No: \n";
	cin>> lee;
	if (lee == 1){//si
		menuSeleccionContinenteAmericano_energia();
	}else if (lee == 2){//no
		menuPrincipal();
	}
	
}
