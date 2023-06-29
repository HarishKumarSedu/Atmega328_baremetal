import pandas as pd 

class LSM6D3Reg :

    def __init__(self,fileName ) -> None:
        self.fileName = fileName

        self.regData = pd.ExcelFile(self.fileName)
        self.regData = self.regData.parse(sheet_name='Table')
        self.regData.drop([0,1],inplace=True)

        # print(self.regData.head)
        # print(self.regData.columns)

        # # Columns 
        # ['Register name', 'Address', 'Bit7', 'Bit6', 'Bit5', 'Bit4', 'Bit3','Bit2', 'Bit1', 'Bit0']

        # print(self.regData)
    
    def LSM6D3_HeaderFile(self):
        with open('lsm6d3base.h', 'w') as file:
            file.write(f'#ifndef LSM6D3_BASE_H__\n')
            file.write(f'#define LSM6D3_BASE_H__\n')
            for _ ,row in self.regData.iterrows():

                regName = row['Register name']
                if '\n'or '\r' in regName:
                    regName=regName.replace('\n', '').replace('\r', '')
                regName.replace(' ','')
                if regName != None:
                    regAddress = row['Address'].split('h')
                    regAddress = regAddress[0]
                    file.write(f'#define {regName}  0x{regAddress}\n')


            for _ ,row in self.regData.iterrows():



                    if  row['Bit7'] != '0' and row['Bit7'] != '1' :
                        bit7 = row['Bit7']
                        if '\n'or '\r' in bit7:
                            bit7=bit7.replace('\n', '').replace('\r', '')
                        bit7=bit7.replace(' ', '')
                        file.write(f'#define {bit7}_pos 7 \n')
                        file.write(f'#define {bit7} (uint8_t)(1UL << {bit7}_pos) \n')


                    if  row['Bit6'] != '0' and row['Bit6'] != '1' :
                        bit6 = row['Bit6']
                        if '\n' in bit6:
                            if '\r' in bit6:
                                bit6=bit6.replace('\n', '').replace('\r', '')
                            else:
                                bit6=bit6.replace('\n', '')
                        bit6=bit6.replace(' ', '')  
                        file.write(f'#define {bit6}_pos 6 \n')
                        file.write(f'#define {bit6} (uint8_t)(1UL << {bit6}_pos) \n')

                    if  row['Bit5'] != '0' and row['Bit5'] != '1' :
                        bit5 = row['Bit5']
                        if '\n'or '\r' in bit5:
                            bit5=bit5.replace('\n', '').replace('\r', '')
                        bit5=bit5.replace(' ', '')
                        file.write(f'#define {bit5}_pos 5 \n')
                        file.write(f'#define {bit5} (uint8_t)(1UL << {bit5}_pos) \n')

                    if  row['Bit4'] != '0' and row['Bit4'] != '1' :
                        bit4 = row['Bit4']
                        if '\n'or '\r' in bit4:
                            bit4=bit4.replace('\n', '').replace('\r', '')
                        bit4=bit4.replace(' ', '')
                        file.write(f'#define {bit4}_pos 4 \n')
                        file.write(f'#define {bit4} (uint8_t)(1UL << {bit4}_pos) \n')

                    if  row['Bit3'] != '0' and row['Bit3'] != '1' :
                        bit3 = row['Bit3']
                        if '\n'or '\r' in bit3:
                            bit3=bit3.replace('\n', '').replace('\r', '')
                        bit3=bit3.replace(' ', '')
                        file.write(f'#define {bit3}_pos 3 \n')
                        file.write(f'#define {bit3} (uint8_t)(1UL << {bit3}_pos) \n')

                    if  row['Bit2'] != '0' and row['Bit2'] != '1' :
                        bit2 = row['Bit2']
                        if '\n'or '\r' in bit2:
                            bit2=bit2.replace('\n', '').replace('\r', '')
                        bit2=bit2.replace(' ', '')
                        file.write(f'#define {bit2}_pos 2 \n')
                        file.write(f'#define {bit2} (uint8_t)(1UL << {bit2}_pos) \n')
                    if  row['Bit1'] != '0' and row['Bit1'] != '1' :
                        bit1 = row['Bit1']
                        if '\n'or '\r' in bit1:
                            bit1=bit1.replace('\n', '').replace('\r', '')
                        bit1=bit1.replace(' ', '')
                        file.write(f'#define {bit1}_pos 1 \n')
                        file.write(f'#define {bit1} (uint8_t)(1UL << {bit1}_pos) \n')
                    if  row['Bit0'] != '0' and row['Bit0'] != '1' :
                        bit0 = row['Bit0']
                        if '\n'or '\r' in bit0:
                            bit0=bit0.replace('\n', '').replace('\r', '')
                        bit0=bit0.replace(' ', '')
                        file.write(f'#define {bit0}_pos 0 \n')
                        file.write(f'#define {bit0} (uint8_t)(1UL << {bit0}_pos) \n')

            file.write(f'#endif\n')

 
        

if __name__ == '__main__':

    atmegaReg = LSM6D3Reg(fileName='LSM6D3_Reg.xlsx')