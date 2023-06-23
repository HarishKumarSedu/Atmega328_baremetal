import pandas as pd 
class AtmegaReg :

    def __init__(self,fileName ) -> None:
        self.fileName = fileName

        # self.regData = pd.read_excel(self.fileName,sheet_name='Table',names=['0', 'Address',  'Name',  'Bit 7',   'Bit 6',   'Bit 5',   'Bit 4',   'Bit 3',   'Bit 2',    'Bit 1',    'Bit 0'])
        self.regData = pd.ExcelFile(self.fileName)
        self.regData = self.regData.parse(sheet_name='Table')
        self.regData.drop([0,1],inplace=True)

        # print(self.regData.head)
        # Column2      Column3  Column4   Column5    Column6    Column7    Column8    Column9     Column10   Column11
        # 'Address',  'Name',  'Bit 7',   'Bit 6',   'Bit 5',   'Bit 4',   'Bit 3',   'Bit 2',    'Bit 1',    'Bit 0'

        # print(self.regData)
        with open('Exported2.h', 'w') as file:
            
            for _ ,row in self.regData.iterrows():

                regName = row['Column3']
                if regName != '–' and regName != 'Reserved':
                    regAddress = row['Column2']
                    file.write(f'#define {regName} (*(volatile uint8_t *) {regAddress}) \n')
                    # print(f'#define {regName} (*(volatile uint8_t *) {regAddress})')

            for _ ,row in self.regData.iterrows():

                regName = row['Column3']
                if regName != '–' and regName != 'Reserved':
                    bit7 = row['Column4']
                    bit6 = row['Column5']
                    bit5 = row['Column6']
                    bit4 = row['Column7']
                    bit3 = row['Column8']
                    bit2 = row['Column9']
                    bit1 = row['Column10']
                    bit0 = row['Column11']

                    # print(bit0)
                    if  bit7 != '–' and bit7 != 'nan' and isinstance(bit7, str):
                        file.write(f'#define {regName}_{bit7} (uint8_t)( 1UL << {7}) \n')

                    if  bit6 != '–' and  isinstance(bit6, str):
                        file.write(f'#define {regName}_{bit6} (uint8_t)( 1UL << {6}) \n')

                    if  bit5 != '–' and isinstance(bit5, str):
                        file.write(f'#define {regName}_{bit5}  (uint8_t)(1UL << {5}) \n')

                    if  bit4 != '–' and isinstance(bit4, str):
                        file.write(f'#define {regName}_{bit4}  (uint8_t)(1UL << {4}) \n')

                    if  bit3 != '–' and isinstance(bit3, str):
                        file.write(f'#define {regName}_{bit3}  (uint8_t)(1UL << {3}) \n')

                    if  bit2 != '–' and isinstance(bit2, str):
                        file.write(f'#define {regName}_{bit2}  (uint8_t)(1UL << {2}) \n')

                    if  bit1 != '–' and isinstance(bit1, str):
                        # print(bit1)
                        file.write(f'#define {regName}_{bit1}  (uint8_t)(1UL << {1}) \n')

                    if  bit1 != '–' and  isinstance(bit0, str):
                        # print(bit0)
                        file.write(f'#define {regName}_{bit0}  (uint8_t)(1UL << {0}) \n')
            




if __name__ == '__main__':

    atmegaReg = AtmegaReg(fileName='ATMeaga238_Registers.xlsx')